/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:48:17 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/12 21:04:57 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain( std::string level)
{
    typedef void (Harl::*fptr)(void);
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	fptr functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i;

    for (i = 0; i < 4; i++)
    {
        if (level == levels[i])
            break;
    }
    if (i > 3)
        return;
    (this->*functions[i])();
}

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void Harl::info( void )
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void Harl::warning( void )
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}
void Harl::error( void )
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}