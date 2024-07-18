/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 22:06:51 by svolain           #+#    #+#             */
/*   Updated: 2024/07/18 22:12:10 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &src);
        ~WrongAnimal(void);

        WrongAnimal & operator=(WrongAnimal const & rhs);

        void            makeSound(void) const;
        std::string     getType(void) const;
    protected:
        std::string type;
};

#endif