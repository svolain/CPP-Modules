/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:00:34 by svolain           #+#    #+#             */
/*   Updated: 2024/07/15 22:25:14 by svolain          ###   ########.fr       */
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
        
    private:
        int                 RawBits;
        static const int    bits = 8;
};

std::ostream	&operator<<(std::ostream &stream, Fixed const &f);

#endif