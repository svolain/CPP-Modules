/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 22:53:47 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 15:27:37 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructed\n";
}

WrongCat::WrongCat(WrongCat const &src): WrongAnimal()
{
    std::cout << "WrongCat copied\n";
    this->type = src.getType();
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructed\n";
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
    if (this != &rhs)
        this->type = rhs.getType();
    std::cout << "WrongCat copy assignment\n";
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Wrongcat noises\n";
}