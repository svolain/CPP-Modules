/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:17:37 by svolain           #+#    #+#             */
/*   Updated: 2024/08/02 11:11:55 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Array.hpp"

int main(int, char**)
{
	Array<int> empty = Array<int>();
	try
	{
		std::cout << empty[0] << "\n";
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << "\n";
	}

	Array<int> ints = Array<int>(10);
	std::cout << "{";
	for (int i = 0; i < ints.size(); i++)
	{
		if (i != 0)
			std::cout << ", ";
		std::cout << ints[i];
	}
	std::cout << "}\n";

	Array<int> c = Array<int>(ints);
	for (int i = 0; i < c.size(); i++)
		c[i] = i;

	Array<int> copy2 = Array<int>();
	Array<int> d = c;
	for (int i = 0; i < d.size(); i++)
		d[i] = i * i;

	for (int i = 0; i < ints.size(); i++)
	{
		if (i != 0)
			std::cout << ", ";
		std::cout << ints[i];
	}
	std::cout << "}\n";
	for (int i = 0; i < c.size(); i++)
	{
		if (i != 0)
			std::cout << ", ";
		std::cout << c[i];
	}
	std::cout << "}\n";
	for (int i = 0; i < d.size(); i++)
	{
		if (i != 0)
			std::cout << ", ";
		std::cout << d[i];
	}
	std::cout << "}\n";

	try
	{
		std::cout << ints[10] << "\n";
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << "\n";
	}

	return 0;
}