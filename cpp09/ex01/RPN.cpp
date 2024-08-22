/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:54:21 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/22 09:54:23 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{}

RPN::~RPN(void)
{}

RPN::RPN(const RPN &src)
{
    *this = src;
}

RPN&	RPN::operator=(const RPN &rhs)
{
    if (this != &rhs)
        this->_container = rhs._container;
    return *this;
}

bool    RPN::checkCalculation(const std::string& rpn)
{
    std::string operators = "+-/*";
	int	i = 0;
	for (auto c : rpn)
	{
        if (std::isspace(c))
            continue;
        
        if (std::isdigit(c)){
            i++;  
        }  
		else if (operators.find(c) != std::string::npos) {
            if (i < 2) 
            {
                std::cout << "Error: Not enough operands for operator '" << c << "'" << std::endl;
                return false;
            }
            i--;
        }
        else {
            std::cout << "Error: Invalid character '" << c << "' in input" << std::endl;
            return false;
        }
    }
    if (i != 1) {
        std::cout << "Error: Invalid RPN expression (remaining operands: " << i << ")\n";
        return false;
    }
    return true;
}

void	RPN::runRPN( const std::string& rpn )
{
	std::string	operators = "+-*/";
	size_t	pos;

	for (auto c : rpn)
	{
		if (std::isspace(c))
			continue;
		pos = operators.find(c);
		if (pos != std::string::npos)
		{
			int last = this->_container.top();
            this->_container.pop();
            int slast = this->_container.top();
            this->_container.pop();
			switch (pos) {
                case 0:
                    this->_container.push(slast + last);
                    break;
                case 1:
                    this->_container.push(slast - last);
                    break;
                case 2:
                    this->_container.push(slast * last);
                    break;
                case 3:
                    if (last == 0) {
                        std::cerr << "Error: Division by zero\n";
                        return;
                    }
                    this->_container.push(slast / last);
                    break;
            }
            continue;
        }
		this->_container.push(c - '0');
	}
	std::cout << this->_container.top() << std::endl;
	this->_container.pop();
}