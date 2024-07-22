/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:34:18 by svolain           #+#    #+#             */
/*   Updated: 2024/07/22 16:25:19 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Character.hpp"

Character::Character(void)
{
    this->name = "Default";
}

Character::Character(std::string name)
{
    this->name = name;
}

Character::Character(Character const &src): name(src.name)
{
    for (int i = 0; i < 4; i++)
    {
        if (src.inventory[i] != 0)
            this->inventory[i] = src.inventory[i]->clone();
    }
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] != 0)
            delete(this->inventory[i]);
    }
}

Character & Character::operator=(Character const & rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i] != 0)
                delete(this->inventory[i]);
        }

        for (int i = 0; i < 4; i++)
        {
            if (rhs.inventory[i] != 0)
                this->inventory[i] = rhs.inventory[i]->clone();
            else
                this->inventory[i] = 0;
        }
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return this->name;
}

void    Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == 0)
        {
            this->inventory[i] = m;
            break;
        }
    }
}

void               Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
        return ;
    if (this->inventory[idx] == 0)
        return ;
    inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx > 3 || idx < 0)
	    return ;
    if (this->inventory[idx] == 0)
	    return ;
    this->inventory[idx]->use(target);
}