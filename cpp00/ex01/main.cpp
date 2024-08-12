/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:04:18 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/12 10:37:00 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook   phonebook;
    std::string input;

    while(1)
    {
        std::cout << "Enter ADD, SEARCH or EXIT" << std::endl;
        std::cin >> input;
        if (input.empty())
            break;
        if (input == "ADD")
            phonebook.add_contact();
        else if (input == "SEARCH")
            phonebook.search_contact();
        else if (input == "EXIT")
            break;
    }
    return 0;
}