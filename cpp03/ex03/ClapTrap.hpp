/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:37:54 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/18 09:56:49 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(std::string name, int hp, int ep, int ap);
        ClapTrap(ClapTrap const &src);
        ~ClapTrap(void);
        
        ClapTrap & operator=(ClapTrap const & rhs);

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

    protected:
        std::string _name;
        int         _hit_points;
        int         _energy_points;
        int         _attack_damage;
};

#endif