/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:28:57 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 15:23:07 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"

Dog::Dog(void): AAnimal("Dog")
{
    this->brain = new Brain();
    std::cout << "Dog constructed\n";
}

Dog::Dog(Dog const &src): AAnimal(src)
{
    std::cout << "Dog copied\n";
    this->brain  = new Brain(*src.brain);
}

Dog::~Dog(void)
{
    delete this->brain;
    std::cout << "Dog destructed\n";
}

Dog & Dog::operator=(Dog const & rhs)
{
    std::cout << "Dog copy operator called\n";
    if (this != &rhs)
    {
        this->type = rhs.type;
        this->brain  = new Brain(*rhs.brain);
    }
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Dog sounds\n";
}

void    Dog::setBrains(std::string idea) const
{
    this->brain->putIdea(idea);
}

void    Dog::printBrains(void) const
{
    this->brain->getIdeas();
}