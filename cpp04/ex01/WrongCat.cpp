/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 22:53:47 by svolain           #+#    #+#             */
/*   Updated: 2024/07/18 23:00:54 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructed\n";
}

WrongCat::WrongCat(WrongCat const &src)
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
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Wrongcat noises\n";
}