/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:34:56 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/09 11:53:11 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

void    Contact::set_first_name(std::string name)
{
    this->first_name = name;
}

void Contact::set_last_name(std::string name)
{
    this->last_name = name;
}

void Contact::set_nickname(std::string name)
{
    this->nickname = name;
}

void Contact::set_secret(std::string secret)
{
    this->secret = secret;
}

void Contact::set_phone_number(std::string number)
{
    this->phone_number = number;
}

std::string Contact::get_first_name(void)
{
    return (this->first_name);
}

std::string Contact::get_last_name(void)
{
    return (this->last_name);
}
        
std::string Contact::get_nickname(void)
{
    return (this->nickname);
}

std::string Contact::get_secret(void)
{
    return (this->secret);
}

std::string Contact::get_phone_number(void)
{
    return (this->phone_number);
}

bool    Contact::is_empty(void)
{
    return(this->first_name.empty());
}
