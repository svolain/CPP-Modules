/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:37:51 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/18 09:51:18 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    dork("Dork");
    ScavTrap    zorg("Zorg");
    
    std::cout << "\n-----attack and take damage tests-----\n\n";
    for (int i = 0; i <= 5; i++)
	{
        zorg.attack("Dork");
        dork.takeDamage(20);
    }

	
    std::cout << "\n-----repair tests-----\n\n";
        dork.beRepaired(1);
        zorg.beRepaired(1);

    std::cout << "\n-----gate keep tests-----\n\n";
    dork.guardGate();
    zorg.guardGate();
    zorg.guardGate();
}
