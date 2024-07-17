/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:41:41 by svolain           #+#    #+#             */
/*   Updated: 2024/07/17 21:03:50 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        ~FragTrap(void);

        void    attack(const std::string& target);
        void    highFiveGuys(void);
};

#endif