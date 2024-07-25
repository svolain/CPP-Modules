/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:12:59 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/24 13:32:16 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits>

PhoneBook::PhoneBook()
{
    this->index = 0;
}

PhoneBook::~PhoneBook()
{

}

std::string read_integer(std::string output)
{
    std::string input;
    bool valid;

    while (true) {
        std::cout << output << std::endl;
        std::getline(std::cin, input);
        valid = true;
        for (char c : input) {
            if (!std::isdigit(c)) {
                valid = false;
                break;
            }
        }
        if (valid)
            return input;
        else
            std::cout << "Invalid input. Please enter a valid number." << std::endl;
    }
}

std::string read_string(std::string output)
{
    std::string input;

    std::cout << output << std::endl;
    getline(std::cin, input);
    return (input);
}

void    PhoneBook::add_contact()
{
    Contact contact;
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    contact.set_first_name(read_string("Enter first name"));
    contact.set_last_name(read_string("Enter last name"));
    contact.set_nickname(read_string("Enter nickname"));
    contact.set_phone_number(read_integer("Enter phone number"));
    contact.set_secret(read_string("Enter darkest secret"));
    this->contacts[this->index] = contact;
    this->index++;
    if (this->index >= max_contacts)
        this->index = 0;
}

void    print_first_row()
{
    std::cout << std::setw(10) << std::setfill(' ') << "index";
    std::cout << '|';
    std::cout << std::setw(10) << std::setfill(' ') << "first name";
    std::cout << '|';
    std::cout << std::setw(10) << std::setfill(' ') << "last name";
    std::cout << '|';
    std::cout << std::setw(10) << std::setfill(' ') << "nickname";
    std::cout << std::endl;
}

void    print_format(std::string str)
{
    if (str.length() < max_column)
    {
        std::cout << std::setw(10);
        std::cout << str;
    }
    else
        std::cout << str.substr(0,9) << ".";
}

void    print_contact_list(Contact *contacts,  int contact_count)
{
    print_first_row();
    for (int i = 0; i <= contact_count; i++)
    {
        if (contacts[i].is_empty())
            break ;
        print_format(std::to_string(i + 1));
        std::cout <<  "|";
        print_format(contacts[i].get_first_name());
        std::cout <<  "|";
        print_format(contacts[i].get_last_name());
        std::cout <<  "|";
        print_format(contacts[i].get_nickname());
        std::cout <<  std::endl;
    }
    
}

void    print_contact(Contact contact)
{
    std::cout << contact.get_first_name() << std::endl;
    std::cout << contact.get_last_name() << std::endl;
    std::cout << contact.get_nickname() << std::endl;
    std::cout << contact.get_phone_number() << std::endl;
    std::cout << contact.get_secret() << std::endl;
}

void    PhoneBook::search_contact()
{
    int         contact_count;
    int         index;
    std::string input;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for (int i = 0; i < max_contacts; i++)
    {
        contact_count = i;
        if (contacts[i].is_empty())
            break;
    }
    if (!contact_count)
    {
        std::cout << "Phonebook is empty" << std::endl;
        return ;
    }
    print_contact_list(this->contacts, contact_count);
    while (1)
    {
        input = read_integer("Enter index");
        index = stoi(input) - 1;   
        if (index < 0 || index >= contact_count + 1)
            std::cout << "Index out of range" << std::endl;
        else if (this->contacts[index].is_empty())
            std::cout << "No contacts at this index" << std::endl;
        else
            break ;     
    }
    print_contact(this->contacts[index]);
}