/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:58:42 by svolain           #+#    #+#             */
/*   Updated: 2024/07/18 21:55:49 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"

Animal::Animal(void): type("Default")
{
    std::cout << "Animal constructed\n";
}

Animal::Animal(std::string type): type(type)
{
    std::cout << "Animal " << this->type << " constructed\n";
}

Animal::Animal(Animal const &src)
{
    this->type = src.type;
    std::cout << "Animal copied\n";
}

Animal::~Animal(void)
{
    std::cout << "Animal destructed\n";
}

Animal & Animal::operator=(Animal const & rhs)
{
    if (this != &rhs)
        this->type = rhs.type;
    std::cout << "Animal copy operator called\n";
    return (*this);
}

std::string Animal::getType(void) const
{
    return (this->type);
}

void    Animal::makeSound(void) const
{
    std::cout << "Default npc animal noise\n";
}