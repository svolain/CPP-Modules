/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:53:00 by svolain           #+#    #+#             */
/*   Updated: 2024/07/25 23:33:33 by svolain          ###   ########.fr       */
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
            throw std::out_of_range("char: impossible");
        }

        char charValue = static_cast<char>(num);
        if (isprint(charValue))
            std::cout << "char: " << charValue << std::endl;
        else
            std::cerr << "char: Non displayable" << std::endl;
    } 
    catch (const std::invalid_argument& e) 
    {
        std::cerr << "" << std::endl;
    } 
    catch (const std::out_of_range& e) 
    {
        std::cerr << "Out of range: " << e.what() << std::endl;
    }
}

void	toFloat(std::string input)
{
    try
    {
        float f = std::stof(input);
        std::cout << "float: " << f << std::endl;
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