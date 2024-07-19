/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:28:57 by svolain           #+#    #+#             */
/*   Updated: 2024/07/18 21:56:21 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
    std::cout << "Dog constructed\n";
}

Dog::Dog(Dog const &src): Animal(src)
{
    std::cout << "Dog copied\n";
    this->type  = src.type;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructed\n";
}

Dog & Dog::operator=(Dog const & rhs)
{
    std::cout << "Dog copy operator called\n";
    if (this != &rhs)
        this->type = rhs.type;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Dog sounds\n";
}