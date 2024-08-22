/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:53:38 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/22 09:53:40 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <fstream>
# include <iostream>
# include <string>
# include <iomanip>

class BitcoinExchange {

    public:
        BitcoinExchange(void);
        BitcoinExchange(BitcoinExchange const &src);
        ~BitcoinExchange(void);

        BitcoinExchange & operator=(BitcoinExchange const &rhs);

        void readData(std::ifstream& database);

        float getRate(const std::string& date);

        bool CheckDateFormat(const std::string &date);
        bool CheckValidDate(const std::string& date);
        bool CheckRateFormat(const std::string& rate);
    private:
        std::map<std::string, float> _daterate;
};

#endif