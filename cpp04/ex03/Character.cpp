/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:34:18 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 19:08:49 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Character.hpp"

    Character::Character(std::string const &name): name(name)
    {
        for (int i = 0; i < 4; i++)
            this->inventory[i] = NULL;
        std::cout << "Character " << this->name << " constructed\n";
    }

    Character::Character(Character & const src): name(src.name)
    {
        for (int i = 0; i < 4; i++)
            this->inventory[i] = src.inventory[i];
        std::cout << "Character " << this->name << " copied\n";
    }

    Character::~Character(void)
    {
        for (int i = 0; i < 4; i++)
            if (this->inventory[i])
                delete this->inventory[i];
        std::cout << "Character " << this->name << " destructed\n";
    }

    Character & Character::operator=(Character const & rhs)
    {
        if (this != &rhs)
        {
            this->name = rhs.getName();

            for (int i = 0; i < 4; i++)
                if (this->inventory[i])
                    delete this->inventory[i];

            for (int i = 0; i < 4; i++)
            {
                if (rhs.inventory[i])
                    this->inventory[i] = rhs.inventory[i];
                else
                 this->inventory[i] = NULL;
            }
        }
        return (*this);
    }

    std::string const& Character::getName() const
    {
        return (this->name);
    }

    void               Character::equip(AMateria* m)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i] == NULL)
            {
                this->inventory[i] = m;
                std::cout << "Character " << this->name << " equipped with " << m->getType() << std::endl;
                return;
            }
        }
    }

    void               Character::unequip(int idx)
    {
        if (this->inventory[idx])
        {
            inventory[idx] = NULL;
        }
    }

    void               Character::use(int idx, ICharacter& target)
    {
        if (this->inventory[idx])
        {
            this->inventory[idx]->use(target);
            std::cout << "Character " << this->name << " uses " << this->inventory[idx]->getType() << std::endl;
        }
    }