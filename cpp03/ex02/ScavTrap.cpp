/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:45:10 by svolain           #+#    #+#             */
/*   Updated: 2024/07/17 19:43:10 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap("Default", 100, 50, 20) 
{
    std::cout << "ScavTrap Default constructed\n";
    this->guard = false;
}


ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap " << name << " constructed\n";
    this->guard = false;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << this->_name << " destructed\n";
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_energy_points <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " hardattack failed, not enough energy points!\n";
        return ;
    }
    else if (this->_hit_points <= 0)
    {
        std::cout << "ScavTrap " << this->_name << "is dead!\n";
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " hardattacks " << target;
    std::cout << ", causing " << this->_attack_damage << " points of damage!\n";
    this-> _energy_points -= 1;
}

void    ScavTrap::guardGate(void)
{
    if (!this->guard && this->_hit_points > 0)
    {
        std::cout << "ScavTrap " << this->_name << " is now in Gatekeeper mode\n";
        this->guard = true;
    }
    else if (this->_hit_points <= 0)
        std::cout << "ScavTrap " << this->_name << "is dead!\n";
    else
        std::cout << "ScavTrap " << this->_name << " is already in Gatekeeper mode\n";
}