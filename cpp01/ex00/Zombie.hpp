/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:54:08 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/12 11:54:10 by vsavolai         ###   ########.fr       */
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