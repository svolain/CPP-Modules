/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:00:34 by svolain           #+#    #+#             */
/*   Updated: 2024/07/17 14:20:05 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
    public:
        Fixed(void);
        Fixed(Fixed const &src);
        ~Fixed(void);
        Fixed & operator=(Fixed const & rhs);

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

    private:
        int         RawBits;
        int         bits = 8;
};

#endif
