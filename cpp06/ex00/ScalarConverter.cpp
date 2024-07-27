/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:53:00 by svolain           #+#    #+#             */
/*   Updated: 2024/07/27 13:28:47 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void    toInt(std::string input)
{
    try {
            int i = std::stoi(input);
            std::cout << "int: " << i << std::endl;
        }
        catch (const std::invalid_argument& e) 
        {
            std::cerr << "int: impossible" << std::endl;
        } catch (const std::out_of_range& e) 
        {
            std::cerr << "int: impossible" << std::endl;
        }
}

void	toChar(std::string input)
{
    try {
        int num = std::stoi(input);

        if (num < CHAR_MIN || num > CHAR_MAX) {
            std::cerr << "char: impossible" << std::endl;
            return ;
        }

        char charValue = static_cast<char>(num);
        if (isprint(charValue))
            std::cout << "char: " << charValue << std::endl;
        else
            std::cerr << "char: Non displayable" << std::endl;
    } 
    catch (const std::invalid_argument& e) 
    {
        std::cerr << "char: impossible" << std::endl;
    } 
    catch (const std::out_of_range& e) 
    {
        std::cerr << "Out of range: " << e.what() << std::endl;
        return ;
    }
}

void	toFloat(std::string input)
{
    if (input == "nan" || input == "inf" || input == "-inf") 
    {
            std::cerr << "float: nanf" << std::endl;
            return;
    }
    try
    {
        float f = std::stof(input);
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f\n";
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << "float: nanf" << std::endl;
    }
    catch (const std::out_of_range& e) 
    {
        std::cerr << "float: nanf " << std::endl;
    }
    
}

void	toDouble(std::string input)
{
    try 
    {
        double d = std::stod(input);
        std::cout << "double: " << d << std::endl;
    } 
    catch (const std::invalid_argument& e) {
        std::cerr << "double: nan" << std::endl;
    } 
    catch (const std::out_of_range& e) {
        std::cerr << "double: nan" << std::endl;
    }
}

void	ScalarConverter::convert(std::string input)
{
    toChar(input);
	toInt(input);
	toFloat(input);
	toDouble(input);
}