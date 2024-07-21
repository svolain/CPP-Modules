/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:38:30 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 17:21:06 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>

class Character: public ICharacter
{
    public:
        Character(std::string const &name);
        Character(Character & const src);
        ~Character(void);

        Character & operator=(Character const & rhs);

        std::string const& getName() const;
        void               equip(AMateria* m);
        void               unequip(int idx);
        void               use(int idx, ICharacter& target);

    private:
        std::string name;
        AMateria    *inventory[4];

};

#endif