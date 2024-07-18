/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:41:15 by svolain           #+#    #+#             */
/*   Updated: 2024/07/18 12:13:50 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("Default", 100, 50, 30) 
{
    std::cout << "FragTrap Default constructed\n";
}


FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 50, 30)
{
    std::cout << "FragTrap " << name << " constructed\n";
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->_name << " destructed\n";
}

FragTrap::FragTrap(const FragTrap& rhs)
{
    std::cout << "ScavTrap " << this->_name << " copy constructor called\n";
    this->_name = rhs._name;
    this->_attack_damage = rhs._attack_damage;
    this->_energy_points = rhs._energy_points;
    this->_hit_points = rhs._hit_points;
}
FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
    std::cout << "FragTrap " << this->_name << " copy assignment called\n";
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_attack_damage = rhs._attack_damage;
        this->_energy_points = rhs._energy_points;
        this->_hit_points = rhs._hit_points;
    }
    return (*this);
}

void    FragTrap::highFiveGuys(void)
{
    std::cout << "FragTrap " << this->_name << ": Highfive you awesome sob!\n";
}