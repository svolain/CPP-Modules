/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:09:05 by svolain           #+#    #+#             */
/*   Updated: 2024/07/18 21:56:38 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
    this->type = "Cat";
    std::cout << "Cat constructed\n";
}

Cat::Cat(Cat const &src): Animal(src)
{
    std::cout << "Cat copied\n";
    this->type  = src.type;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructed\n";
}

Cat & Cat::operator=(Cat const & rhs)
{
    std::cout << "Cat copy operator called\n";
    if (this != &rhs)
        this->type = rhs.type;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Cat sounds\n";
}