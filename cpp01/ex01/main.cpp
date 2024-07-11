/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:33:15 by svolain           #+#    #+#             */
/*   Updated: 2024/07/11 12:59:13 by svolain          ###   ########.fr       */
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