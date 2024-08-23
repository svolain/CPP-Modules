/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:54:46 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/23 12:52:17 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cerr << "Error: wrong input" << std::endl;
        return (1);
    }
    PmergeMe merger;
    merger.parseNumbers(argv, argc);
    merger.sortNumbers(argv, argc);
}