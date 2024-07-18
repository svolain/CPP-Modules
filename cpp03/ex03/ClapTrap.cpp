/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:37:58 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/18 12:04:22 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Default"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
     std::cout << "ClapTrap Default constructed\n";
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap " << name << " constructed with name\n";
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int ap):  _name(name), _hit_points(hp), _energy_points(ep), _attack_damage(ap)
{
    std::cout << "ClapTrap " << name << " constructed with name and points\n";
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    this->_name = src._name;
    this->_attack_damage = src._attack_damage;
    this->_energy_points = src._energy_points;
    this->_hit_points = src._hit_points;
    std::cout << "ClapTrap " << this->_name << " copy constructor called\n";
}
ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap "<< this->_name << " destructed\n";
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_attack_damage = rhs._attack_damage;
        this->_energy_points = rhs._energy_points;
        this->_hit_points = rhs._hit_points;
    }
    std::cout << "ClapTrap " << this->_name << " copy assignment called\n";
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->_energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " attack failed, not enough energy points!\n";
        return ;
    }
    else if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << "is dead!\n";
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target;
    std::cout << ", causing " << this->_attack_damage << " points of damage!\n";
    this-> _energy_points -= 1;
}
void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead!\n";
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " took damage " << amount << " points!\n";
    this->_hit_points-= amount;
}
void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " repair failed, not enough energy poinnts!\n";
        return ;
    }
    else if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " id dead!!\n";
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " repairs himself " << amount << " points!\n";
    this->_hit_points += amount;
    this-> _energy_points -= 1;
}