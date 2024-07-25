/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:52:56 by svolain           #+#    #+#             */
/*   Updated: 2024/07/25 23:38:52 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <stdexcept>

# define CHAR_MIN 0
# define CHAR_MAX 255

class ScalarConverter
{
    public:
        static void convert(std::string input);

    private:
        ScalarConverter(void);
        ~ScalarConverter(void);
        ScalarConverter(ScalarConverter const & src);
        ScalarConverter& operator=(const ScalarConverter& other);
};

#endif