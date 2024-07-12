/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 00:33:56 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/12 11:52:30 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie zombie1("Stack");

    zombie1.announce();

    Zombie *zombie2 = newZombie("Heap");
    zombie2->announce();
    delete zombie2;

    randomChump("Random");
    return (0);
}