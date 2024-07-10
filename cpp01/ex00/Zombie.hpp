/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 00:01:02 by svolain           #+#    #+#             */
/*   Updated: 2024/07/11 00:21:47 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
    public:
        Zombie(std::string name);
        ~Zombie();

        void    announce( void );
        Zombie* newZombie(std::string name);
        void    randomChump(std::string name);
    private:
        std::string name;
};

    Zombie* newZombie(std::string name);
    void    randomChump(std::string name);

#endif