/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:02:18 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 13:00:47 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    public:
        Animal(void);
        Animal(std::string type);
        Animal(Animal const &src);
        virtual ~Animal(void);

        virtual Animal & operator=(Animal const & rhs);

        virtual void    makeSound(void) const;
        std::string     getType(void) const;
    protected:
        std::string type;
};

#endif