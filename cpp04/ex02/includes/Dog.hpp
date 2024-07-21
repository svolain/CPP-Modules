/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:27:48 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 15:15:32 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{
    public:
        Dog(void);
        Dog(Dog const &src);
        virtual ~Dog(void);

        Dog & operator=(Dog const & rhs);
        virtual void    makeSound(void) const;

        void    setBrains(std::string idea) const;
        void    printBrains(void) const;

    private:
        Brain   *brain;
};

#endif