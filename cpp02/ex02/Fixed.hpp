/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:51:23 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/17 14:32:58 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
    public:
        Fixed(void);
        Fixed(const int integer);
        Fixed(const float floating_point);
        Fixed(Fixed const &src);
        ~Fixed(void);

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;

        bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;

        Fixed & operator=(Fixed const & rhs);
        Fixed	operator+(Fixed const &f);
		Fixed	operator-(Fixed const &f);
		Fixed	operator*(Fixed const &f);
		Fixed	operator/(Fixed const &f);

		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

        static  Fixed &min(Fixed &a, Fixed &b);
        static  Fixed const &min(Fixed const &a, Fixed const &b);
        static  Fixed &max(Fixed &a, Fixed &b);
		static  Fixed const &max(Fixed const &a, Fixed const &b);
        
    private:
        int                 RawBits;
        static const int    bits = 8;
};

std::ostream	&operator<<(std::ostream &stream, Fixed const &f);

#endif