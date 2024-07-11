/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 23:06:10 by svolain           #+#    #+#             */
/*   Updated: 2024/07/12 00:45:12 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define  WEAPON_HPP

# include <string>

class Weapon {

    public:
        Weapon(std::string type);
        void        setType(std::string type);
        std::string getType();
    private:
        std::string type;

};

#endif