/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:54:35 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/12 11:54:37 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void)
{
    std::cout << this->name << ": I will die now \n";
}

void    Zombie::set_name(std::string name)
{
    this->name = name;
}

std::string Zombie::get_name(void)
{
    return (this->name);
}

void    Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
