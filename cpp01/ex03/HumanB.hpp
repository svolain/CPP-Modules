/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 00:34:04 by svolain           #+#    #+#             */
/*   Updated: 2024/07/12 01:15:40 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB {
    public:
        HumanB(std::string name);
        void    attack();
        void    setWeapon(Weapon &weapon);
    private:
        std::string name;
        Weapon      *weapon;
};

#endif