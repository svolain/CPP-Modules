/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:37:51 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/18 10:23:51 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap    dork("Dork");
    ScavTrap    zorg("Zorg");
    FragTrap    bonk("bonk");

    
    std::cout << "\n-----attack and take damage tests-----\n\n";
    for (int i = 0; i <= 5; i++)
	{
        zorg.attack("Dork");
        dork.takeDamage(20);
    }
    bonk.attack("zork");
    zorg.takeDamage(30);

	
    std::cout << "\n-----repair tests-----\n\n";
        dork.beRepaired(1);
        zorg.beRepaired(1);

    std::cout << "\n-----gate keep and highfive tests-----\n\n";
    zorg.guardGate();
    bonk.highFiveGuys();
}