/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:22:13 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/18 12:58:31 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap()
{
    this->_name = "Default";
    ClapTrap::_name = "Default claptrap";
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;

    std::cout << "DiamondTrap Default constructed\n";
}
DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    this->_name = name;
    ClapTrap::_name = "Default claptrap";
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;

    std::cout << "DiamondTrap " << this->_name << " constructed\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ScavTrap(src), FragTrap(src)
{
    this->ClapTrap::_name = src.ClapTrap::_name;
    std::cout << "DiamondTrap " << this->_name << " copy constructor called\n";
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
    ClapTrap::operator=(rhs);
    std::cout << "DiamondTrap " << this->_name << " copy assignment called\n";
    return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap " << this->_name << " destructed\n";
}

void    DiamondTrap::whoAmI()
{
    std::cout << "ClapTrap name: " << ClapTrap::_name << "\n";
    std::cout << "DiamondTrap name: " << this->_name << "\n";
}