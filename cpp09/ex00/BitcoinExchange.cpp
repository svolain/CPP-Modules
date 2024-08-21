/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 08:40:33 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/21 13:16:20 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{

}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
    *this = src;
}

BitcoinExchange::~BitcoinExchange(void)
{
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
    this->_daterate = rhs._daterate;
    return *this;
}

void BitcoinExchange::readData(std::ifstream& database)
{
    std::string line;

    std::getline(database, line);
    while(std::getline(database, line))
    {
        size_t comma = line.find(",");
        std::string key = line.substr(0, comma - 1);
        std::string value = line.substr(comma + 1);
        float fl_value = std::stof(value);
        this->_daterate[key] = fl_value;
    }
}

float BitcoinExchange::getRate(const std::string& date)
{
     if (this->_daterate.count(date) > 0)
        return this->_daterate.at(date);
    return (--this->_daterate.lower_bound(date))->second;
}

bool BitcoinExchange::CheckDateFormat(const std::string &date)
{
    
}
bool BitcoinExchange::CheckValidDate(const std::string& date)
{

}
bool BitcoinExchange::CheckRateFormat(const std::string& rate)
{
    
}