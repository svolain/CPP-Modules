/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:27:48 by svolain           #+#    #+#             */
/*   Updated: 2024/07/18 22:05:27 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog(void);
        Dog(Dog const &src);
        virtual ~Dog(void);

        Dog & operator=(Dog const & rhs);
        virtual void    makeSound(void) const;
};

#endif