/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:54:46 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/26 11:17:26 by vsavolai         ###   ########.fr       */
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
    if (!merger.parseNumbers(argv, argc))
        return 1;
    merger.sortNumbers(argv, argc);
    return 0;
}