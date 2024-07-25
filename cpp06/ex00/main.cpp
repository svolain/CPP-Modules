/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:51:13 by svolain           #+#    #+#             */
/*   Updated: 2024/07/25 23:39:05 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) 
{

if (argc != 2) {
	std::cout << "Wrong syntax." << std::endl;
	return 0;
}

ScalarConverter::convert(argv[1]);
}
