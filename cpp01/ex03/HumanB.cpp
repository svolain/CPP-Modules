/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:55:29 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/15 15:28:49 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(nullptr)
{
    return ;
}

void    HumanB::attack()
{
    if (this->weapon == nullptr)
        std::cout << this->name << " can't attack without weapon" << std::endl;
    else
        std::cout << this->name << " attack with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon) 
{
    this->weapon = &weapon;
}