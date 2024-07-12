/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:39:39 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/12 21:24:57 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Harl harl;
        std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        int i;

        for (i = 0; i < 4; i++)
            if (argv[1] == levels[i])
                break ;
        
        if (i == 0)
            for (int j = i; j < 4; j++)
                harl.complain(levels[j]);
        else if (i == 1)
            for (int j = 1; j < 4; j++)
                harl.complain(levels[j]);
        else if (i == 2)
            for (int j = i; j < 4; j++)
                harl.complain(levels[j]);
        else if (i == 3)
            for (int j = i; j < 4; j++)
                harl.complain(levels[j]);
        else 
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
    else
        std::cout << "Error: Wrong number of arguments\n";
}