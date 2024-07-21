/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:36:32 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 15:04:34 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Brain.hpp"

Brain::Brain(void): ideas()
{
    std::cout << "Brains constructed\n";
}

Brain::~Brain(void)
{
    std::cout << "Brains destructed\n";
}

Brain::Brain(Brain const &src)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
    std::cout << "Brains copied";
}

Brain & Brain::operator=(Brain const & rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = rhs.ideas[i]; 
    }
    std::cout << "Brains copy operator called\n";
    return (*this);
}

void    Brain::putIdea(std::string idea)
{
    for (int i = 0; i < 100; i++)
    {
        if (this->ideas[i].empty())
        {
            this->ideas[i] = idea;
            break ;
        }
    }
}

void    Brain::getIdeas(void)
{
    for (int i = 0; i < 100; i++)
    {
        if (!this->ideas[i].empty())
            std::cout << this->ideas[i] << std::endl;
        else
            break;
    }
}