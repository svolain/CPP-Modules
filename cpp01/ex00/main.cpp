/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 00:33:56 by svolain           #+#    #+#             */
/*   Updated: 2024/07/11 00:46:06 by svolain          ###   ########.fr       */
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