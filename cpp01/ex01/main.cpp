/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:53:34 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/12 11:53:35 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombies;

    zombies = zombieHorde(5, "Ramon");

    for (int i = 0; i < 5; i++)
        zombies[i].announce();

    delete[] zombies;
    return (0);
}