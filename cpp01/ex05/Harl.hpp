/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:44:43 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/12 16:29:38 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl {
    public:
        Harl();
        void complain( std::string level );
    private:
        struct _af {
            std::string level;
            void        (Harl::*f)(void);
        };
        struct _af  af[4];
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};

#endif