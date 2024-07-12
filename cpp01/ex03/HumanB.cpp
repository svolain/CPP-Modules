/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:55:29 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/12 11:55:30 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{
    return ;
}

void    HumanB::attack()
{
    std::cout << this->name << " attack with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon) 
{
    this->weapon = &weapon;
}