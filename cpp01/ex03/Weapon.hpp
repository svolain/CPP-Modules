/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:55:57 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/12 11:55:58 by vsavolai         ###   ########.fr       */
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