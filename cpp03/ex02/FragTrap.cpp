/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:41:15 by svolain           #+#    #+#             */
/*   Updated: 2024/07/17 21:15:36 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("Default", 100, 50, 20) 
{
    std::cout << "FragTrap Default constructed\n";
}


FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
    std::cout << "FragTrap " << name << " constructed\n";
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->_name << " destructed\n";
}

void    FragTrap::attack(const std::string& target)
{
    if (this->_energy_points <= 0)
    {
        std::cout << "FragTrap " << this->_name << " superattack failed, not enough energy points!\n";
        return ;
    }
    else if (this->_hit_points <= 0)
    {
        std::cout << "FragTrap " << this->_name << "is dead!\n";
        return ;
    }
    std::cout << "FragTrap " << this->_name << " superattacks " << target;
    std::cout << ", causing " << this->_attack_damage << " points of damage!\n";
    this-> _energy_points -= 1;
}

void    FragTrap::highFiveGuys(void)
{
    std::cout << "FragTrap " << this->_name << ": Highfive you awesome sob!\n";
}