/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 00:01:02 by svolain           #+#    #+#             */
/*   Updated: 2024/07/11 13:01:44 by svolain          ###   ########.fr       */
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