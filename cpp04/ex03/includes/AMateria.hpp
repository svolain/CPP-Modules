/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:22:44 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 19:18:51 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
    public:
        AMateria(void);
        AMateria(std::string const & type);
        AMateria(AMateria & const src);
        virtual ~AMateria(void);

        AMateria& operator=(const AMateria& rhs);

        std::string const & getType(void) const;
        virtual AMateria*   clone(void) const = 0;
        virtual void        use(ICharacter& target);
    protected:
        std::string type;
};

#endif