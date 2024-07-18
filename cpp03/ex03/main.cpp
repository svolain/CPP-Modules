/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:24:09 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/18 12:46:04 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap    dork("Dork");
    DiamondTrap    zorg("Zorg");
   
    std::cout << "\n-----attack and take damage tests-----\n\n";
    for (int i = 0; i <= 5; i++)
	{
        zorg.attack("Dork");
        dork.takeDamage(30);
    }
	
    std::cout << "\n-----repair tests-----\n\n";
        zorg.beRepaired(1);

    std::cout << "\n----WhoAmI tests-----\n\n";
    zorg.whoAmI();
}