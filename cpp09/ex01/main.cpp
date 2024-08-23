/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:54:12 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/23 12:46:03 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: wrong input" << std::endl;
        return (1);
    }
    RPN calculator;
    if(!calculator.checkCalculation(argv[1]))
        return(1);
    calculator.runRPN(argv[1]);
}