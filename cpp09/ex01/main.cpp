/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:54:12 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/22 09:54:14 by vsavolai         ###   ########.fr       */
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