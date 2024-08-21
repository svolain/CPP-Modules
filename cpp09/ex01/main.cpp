/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:05:54 by svolain           #+#    #+#             */
/*   Updated: 2024/08/21 21:27:24 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: wrong input" << std::endl;
        return (1);
    }
    RPN calculator;
    if(!calculator.checkCalculation(argv[1]))
        return(1);
    calculator.runRPN(argv[1]);
}