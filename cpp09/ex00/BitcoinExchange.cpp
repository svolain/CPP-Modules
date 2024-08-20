/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 08:40:33 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/20 14:41:29 by vsavolai         ###   ########.fr       */
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

void BitcoinExchange::readData(std::ifstream& internal_db)
{

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