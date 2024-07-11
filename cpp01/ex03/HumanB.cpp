/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 00:50:04 by svolain           #+#    #+#             */
/*   Updated: 2024/07/12 01:33:08 by svolain          ###   ########.fr       */
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