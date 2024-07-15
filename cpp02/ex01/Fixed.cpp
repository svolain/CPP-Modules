/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:00:28 by svolain           #+#    #+#             */
/*   Updated: 2024/07/15 22:26:08 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): RawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignement operator called" << std::endl;

    if (this != &rhs)
        this->RawBits = rhs.getRawBits();
    return *this;
}

int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->RawBits;
}

void    Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->RawBits = raw;
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    this->RawBits = (integer << Fixed::bits);
}

Fixed::Fixed(const float floating_point)
{
    std::cout << "Float constructor called" << std::endl;
    this->RawBits = std::roundf(floating_point * (1 << Fixed::bits));
    
}

float   Fixed::toFloat( void ) const
{
    return ((float)this->RawBits / (float)(1 << Fixed::bits));
}

int     Fixed::toInt( void ) const
{
    return (this->RawBits >> Fixed::bits);
}

std::ostream	&operator<<(std::ostream &stream, Fixed const &f)
{
    stream << f.toFloat();
	return (stream);
}
