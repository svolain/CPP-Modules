/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:41:41 by svolain           #+#    #+#             */
/*   Updated: 2024/07/18 12:44:36 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(const FragTrap& rhs);
        FragTrap& operator=(const FragTrap& rhs);
        ~FragTrap(void);

        void    highFiveGuys(void);
};

#endif