/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 08:40:33 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/21 18:40:27 by svolain          ###   ########.fr       */
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
    return (this->_daterate.lower_bound(date))->second;
}

bool BitcoinExchange::CheckDateFormat(const std::string &date)
{
    if (date.empty())
        return false;
    size_t dash1 = date.find("-");
    size_t dash2 = date.find("-", dash1 + 1);
    if (dash1 == std::string::npos || dash2 == std::string::npos ||
     date.find_first_not_of("0123456789.-|") != std::string::npos)
     {
        std::cerr << "Error: bad input => " << date << std::endl;
        return false; 
     }
     return true;
}

bool BitcoinExchange::CheckValidDate(const std::string& date)
{
    size_t dash1 = date.find("-");
    size_t dash2 = date.find("-", dash1 + 1);

    std::string str_year = date.substr(0, dash1);
    std::string str_month = date.substr(dash1 + 1, dash2 - 1);
    std::string str_day = date.substr(dash2 + 1);

    int year = std::stoi(str_year);
    int month = std::stoi(str_month);
    int day = std::stoi(str_day);
    if (year < 2009 || (year == 2009 && month == 1 && day == 1))
	{
		std::cerr << "Error: Date is below 2009-01-02" << std::endl;
		return false;
	}
    if (month < 1 || month > 12)
	{
		std::cerr << "Error: incorrect month => " << date << std::endl;
		return false;
	}
    if ((day < 1 || day > 31)
	        ||  (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
			||  (day > 28 && month == 2))
    {
        std::cerr << "Error: incorrect day => " << date << std::endl;
		return false;
    }
    return true;
}

bool BitcoinExchange::CheckRateFormat(const std::string& rate)
{
    if (rate.empty() || rate.find_first_not_of("0123456789.-") != std::string::npos
	||  rate.at(0) == '.' || rate.find('.', rate.length() - 1) != std::string::npos)
		std::cerr << "Error: incorrect rate => " << rate << std::endl;
	else if (rate.at(0) == '-')
		std::cerr << "Error: not a positive rate => " << rate << std::endl;
	else if (rate.length() > 10 || (rate.length() == 10 && rate > "2147483647"))
		std::cerr << "Error: too big rate => " << rate << std::endl;
	else
		return true;
	return false;
}