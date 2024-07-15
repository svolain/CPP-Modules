/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:00:34 by svolain           #+#    #+#             */
/*   Updated: 2024/07/15 22:22:56 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
    public:
        Fixed(void);
        Fixed(Fixed const &src);
        ~Fixed(void);
        Fixed & operator=(Fixed const & rhs);

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        Fixed(const int integer);
        Fixed(const float floating_point);

        float   toFloat( void ) const;
        int     toInt( void ) const;

        bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;

        Fixed	operator+(Fixed const &f);
		Fixed	operator-(Fixed const &f);
		Fixed	operator*(Fixed const &f);
		Fixed	operator/(Fixed const &f);

		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
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