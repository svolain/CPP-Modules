/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:58:42 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 15:22:09 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AAnimal.hpp"

AAnimal::AAnimal(void): type("Default")
{
    std::cout << "Animal constructed\n";
}

AAnimal::AAnimal(std::string type): type(type)
{
    std::cout << "Animal " << this->type << " constructed\n";
}

AAnimal::AAnimal(AAnimal const &src)
{
    this->type = src.type;
    std::cout << "Animal copied\n";
}

AAnimal::~AAnimal(void)
{
    std::cout << "Animal destructed\n";
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
    if (this != &rhs)
        this->type = rhs.type;
    std::cout << "Animal copy operator called\n";
    return (*this);
}

std::string AAnimal::getType(void) const
{
    return (this->type);
}

void    AAnimal::makeSound(void) const
{
    std::cout << "Default npc animal noise\n";
}