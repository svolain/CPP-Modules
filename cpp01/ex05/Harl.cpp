/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:48:17 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/12 16:39:30 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    af[0].level = "DEBUG";
    af[0].f = &Harl::debug;
    af[1].level = "INFO";
    af[1].f = &Harl::info;
    af[2].level = "WARNING";
    af[2].f = &Harl::warning;
    af[3].level = "ERROR";
    af[3].f = &Harl::error;
}

void Harl::complain( std::string level )
{
    for (int i = 0; i < 3; i++)
    {
        level == af[i].level ? (this->*af[i].f)() : complain(level);
    }
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void Harl::warning( void )
{
     std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}
void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}