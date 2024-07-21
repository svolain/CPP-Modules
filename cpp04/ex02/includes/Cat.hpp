/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 20:12:32 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 15:15:16 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Brain.hpp"
# include "AAnimal.hpp"

class Cat: public AAnimal
{
    public:
        Cat(void);
        Cat(Cat const &src);
        virtual ~Cat(void);

        Cat & operator=(Cat const & rhs);
        virtual void    makeSound(void) const;

        void    setBrains(std::string idea) const;
        void    printBrains(void) const;
    private:
        Brain   *brain;
};

#endif