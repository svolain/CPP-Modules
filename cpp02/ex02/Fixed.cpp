/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:00:28 by svolain           #+#    #+#             */
/*   Updated: 2024/07/15 22:21:48 by svolain          ###   ########.fr       */
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

bool	Fixed::operator>(Fixed const &rhs) const
{
    if (this->RawBits > rhs.getRawBits())
        return (true);
    return (false);
}

bool	Fixed::operator<(Fixed const &rhs) const
{
    if (this->RawBits < rhs.getRawBits())
        return (true);
    return (false);
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
    if (this->RawBits >= rhs.getRawBits())
        return (true);
    return (false);
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
    if (this->RawBits <= rhs.getRawBits())
        return (true);
    return (false);
}

bool	Fixed::operator==(Fixed const &rhs) const
{
    if (this->RawBits == rhs.getRawBits())
        return (true);
    return (false);
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
    if (this->RawBits != rhs.getRawBits())
        return (true);
    return (false);
}

Fixed	Fixed::operator+(Fixed const &rhs)
{
    this->RawBits += rhs.getRawBits();
    return (*this);
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
    this->RawBits -= rhs.getRawBits();
    return (*this);
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
    this->RawBits *= rhs.getRawBits();
    return (*this);
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
    this->RawBits /= rhs.getRawBits();
    return (*this);
}

Fixed	Fixed::operator++(void)
{
    this->RawBits++;
    return (*this);
}

Fixed	Fixed::operator++(int)
{
    Fixed temp = *this;
    this->RawBits++;
    return (temp);
}

Fixed	Fixed::operator--()
{
    this->RawBits--;
    return (*this);
}

Fixed	Fixed::operator--(int)
{
    Fixed temp = *this;
    this->RawBits--;
    return (temp);
}

Fixed    &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

Fixed    &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (b);
    return (a);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (b);
    return (a);
}