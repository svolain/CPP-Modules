/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:54:44 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/12 11:54:46 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>


class Zombie {
    public:
        ~Zombie(void);

        void        announce(void);
        void        set_name(std::string name);
        std::string get_name(void);
    private:
        std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif