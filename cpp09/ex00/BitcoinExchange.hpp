/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 08:36:02 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/21 18:26:26 by svolain          ###   ########.fr       */
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