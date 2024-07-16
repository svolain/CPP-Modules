/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:51:17 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/16 12:23:29 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): RawBits(0)
{
    return ;
}


Fixed::Fixed(Fixed const &src)
{
    *this = src;
}

Fixed::~Fixed(void)
{
    return ;
}

Fixed::Fixed(const int integer)
{
    this->RawBits = integer << this->bits;
}

Fixed::Fixed(const float floating_point)
{
    float rounded = roundf(floating_point * (1 << this->bits));
    this->RawBits = (int) rounded;
    
}

//---------------------rawbit functions-------------------------------//

int     Fixed::getRawBits( void ) const
{
    return (this->RawBits);
}

void    Fixed::setRawBits( int const raw )
{
    this->RawBits = raw;
}

float   Fixed::toFloat( void ) const
{
    return ((float) this->RawBits / (float) (1 << this->bits));
}

int     Fixed::toInt( void ) const
{
    return (this->RawBits >> this->bits);
}

//---------------------comparison operators---------------------------//

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

//---------------------arithmetic operators---------------------------//

Fixed & Fixed::operator=(Fixed const & rhs)
{
    if (this != &rhs)
        this->RawBits = rhs.getRawBits();
    return (*this);
}

Fixed	Fixed::operator+(Fixed const &rhs)
{
    Fixed ret(this->toFloat() + rhs.toFloat());
    return (ret);
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
    Fixed ret(this->toFloat() - rhs.toFloat());
    return (ret);
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
    Fixed ret(this->toFloat() * rhs.toFloat());
    return (ret);
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
    Fixed ret(this->toFloat() / rhs.toFloat());
    return (ret);
}

//---------------------increase and decrease operators----------------//

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

//---------------------min and max operators--------------------------//

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
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}