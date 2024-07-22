/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:38:30 by svolain           #+#    #+#             */
/*   Updated: 2024/07/22 16:25:09 by vsavolai         ###   ########.fr       */
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
        Character(void);
        Character(std::string name);
        Character(Character const &);
        ~Character(void);

        Character & operator=(Character const &);

        std::string const & getName(void) const;
        void               equip(AMateria* m);
        void               unequip(int idx);
        void               use(int idx, ICharacter& target);

    private:
        std::string name;
        AMateria    *inventory[4] {};

};

#endif