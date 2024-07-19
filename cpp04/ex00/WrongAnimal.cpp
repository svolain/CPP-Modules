/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 22:36:04 by svolain           #+#    #+#             */
/*   Updated: 2024/07/19 10:52:57 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("Default")
{
    std::cout << "WrongAnimal constructed\n";
}
        
WrongAnimal::WrongAnimal(std::string type): type(type)
{
    std::cout << "WrongAnimal " << type << " constructed\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    this->type = src.getType();
    std::cout << "WrongAnimal copied\n";
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructed\n";
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
    if (this != &rhs)
        this->type = rhs.getType();
    std::cout << "WrongAnimal copy assignment\n";
    return (*this);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "Generic npc WrongAnimal noise\n";
}

std::string     WrongAnimal::getType(void) const
{
    return (this->type);
}