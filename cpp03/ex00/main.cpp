/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:37:51 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/17 17:04:06 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    dork("Dork");
    ClapTrap    zorg("Zorg");
    
    std::cout << "\n-----attack and take damage tests-----\n\n";
    zorg.attack("Dork");
	dork.takeDamage(0);
	
    std::cout << "\n-----repair tests-----\n\n";
    for (int i = 0; i <= 10; i++)
    {
        dork.beRepaired(1);
    }

    std::cout << "\n-----Nrepair tests-----\n\n";
    dork.takeDamage(21);
    zorg.attack("Dork");
    dork.takeDamage(0);   
}