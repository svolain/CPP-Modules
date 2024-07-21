/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:02:18 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 15:22:13 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
    public:
        AAnimal(void);
        AAnimal(std::string type);
        AAnimal(AAnimal const &src);
        virtual ~AAnimal(void);

        virtual AAnimal & operator=(AAnimal const & rhs);

        virtual void    makeSound(void) const = 0;
        std::string     getType(void) const;
    protected:
        std::string type;
};

#endif