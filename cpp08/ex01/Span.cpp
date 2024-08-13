/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:09:12 by svolain           #+#    #+#             */
/*   Updated: 2024/08/13 12:44:56 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n): _maxSize(n), _vec()
{
}

Span::Span(Span const &src)
{
    *this = src; 
}

Span::~Span()
{
}

Span & Span::operator=(Span const &rhs)
{
    if (this != &rhs) 
    {
        this->_maxSize = rhs._maxSize;
        this->_vec = rhs._vec;
    }
    return *this;
}

void    Span::addNumber(int number)
{
	if (this->_vec.size() == this->_maxSize)
		throw Span::MaxSizeReached();
	this->_vec.push_back(number);
}

int Span::shortestSpan() const
{
    if (this->_vec.size() < 2)
        throw std::logic_error("Not enough elements");
        
    std::vector<int> sortedVec = this->_vec;
    std::sort(sortedVec.begin(), sortedVec.end());
    int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sortedVec.size(); ++i) {
        int span = sortedVec[i] - sortedVec[i - 1];
        if (span < minSpan)
            minSpan = span;
    }

    return minSpan;
}

int Span::longestSpan() const
{
    if (_vec.size() < 2)
    {
        throw std::logic_error("Not enough elements");
    }

    int min = *std::min_element(_vec.begin(), _vec.end());
	int max = *std::max_element(_vec.begin(), _vec.end());
	return abs(max - min);
}

void    Span::printSpan(void)
{
    std::cout << "{ ";
    for (int num : _vec) {
            std::cout << num << " ";
        }
        std::cout << "}" << std::endl;
}

void Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    if (std::distance(start, end) + this->_vec.size() > this->_maxSize)
    {
        std::cout << "Range biger than max size of container" << std::endl;
        return ;
    }
    this->_vec.insert(this->_vec.end(), start, end);
}