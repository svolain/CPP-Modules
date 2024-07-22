/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:36:42 by svolain           #+#    #+#             */
/*   Updated: 2024/07/22 16:46:47 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; ++i)
    {
        this->inventory[i] = nullptr;
    }
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    for (int i = 0; i < 4; i++)
    {
        if (src.inventory[i] != nullptr)
            this->inventory[i] = src.inventory[i]->clone();
    }
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] != nullptr)
            delete(this->inventory[i]);
    }
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i] != nullptr)
                delete(this->inventory[i]);
        }
            
        for (int i = 0; i < 4; i++)
        {
            if (rhs.inventory[i] != nullptr)
                this->inventory[i] = rhs.inventory[i]->clone();
            else
                this->inventory[i] = nullptr;
        }
    }
    return (*this);
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == nullptr)
            continue ;
        if (this->inventory[i]->getType() == type)
            return (this->inventory[i]->clone());
    }
    return nullptr;
}

void        MateriaSource::learnMateria(AMateria* m)
{
    if (m == 0)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == nullptr)
        {
            this->inventory[i] = m->clone();
            delete m;
            return;
        }
    }
    delete m;
}