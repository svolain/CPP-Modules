/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:09:05 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 15:22:54 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cat.hpp"

Cat::Cat(void): AAnimal("Cat")
{
    this->brain = new Brain();
    std::cout << "Cat constructed\n";
}

Cat::Cat(Cat const &src): AAnimal(src)
{
    std::cout << "Cat copied\n";
    this->type = src.type;
    this->brain = new Brain(*src.brain);
}

Cat::~Cat(void)
{
    delete this->brain;
    std::cout << "Cat destructed\n";
}

Cat & Cat::operator=(Cat const & rhs)
{
    std::cout << "Cat copy operator called\n";
    if (this != &rhs)
    {
        this->type = rhs.type;
        this->brain = new Brain(*rhs.brain);
    }
    return (*this);
}

void    Cat::setBrains(std::string idea) const
{
    this->brain->putIdea(idea);
}

void    Cat::printBrains(void) const
{
    this->brain->getIdeas();
}

void    Cat::makeSound(void) const
{
    std::cout << "Cat sounds\n";
}