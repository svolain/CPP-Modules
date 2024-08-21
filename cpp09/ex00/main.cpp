/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 08:36:06 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/21 18:48:10 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: no input file\n";
        return (1);
    }
    std::ifstream input_file(argv[1], std::ifstream::in);
	if (!input_file.is_open())
    {
        std::cerr << "Error: can't open input file\n";
        return (1);
    }
    std::ifstream database("./data.csv", std::ifstream::in);
    if (!database.is_open())
    {
        std::cerr << "Error: can't open database\n";
        return (1);
    }

    std::string line;
    BitcoinExchange btc;
    btc.readData(database);

    std::getline(input_file, line);
    while(std::getline(input_file, line))
    {
        size_t pipe = line.find("|");
        if (pipe == std::string::npos || line.length() < pipe + 2)
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        std::string date = line.substr(0, pipe - 1);
        if (!btc.CheckDateFormat(date) || !btc.CheckValidDate(date))
			continue;
        std::string str_rate = line.substr(pipe + 2);
        if (!btc.CheckRateFormat(str_rate))
			continue;
        float rate = std::stof(str_rate);
        std::cout << date << " => " << rate << " = " << std::setprecision(2) << rate * btc.getRate(date) << std::endl;
    }
    input_file.close();
    database.close();
}