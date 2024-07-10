/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 23:58:44 by svolain           #+#    #+#             */
/*   Updated: 2024/07/11 00:47:21 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << ": I will die now \n";
}

void    Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
