/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:22:44 by svolain           #+#    #+#             */
/*   Updated: 2024/07/22 16:25:08 by vsavolai         ###   ########.fr       */
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
        AMateria(AMateria const &);
        virtual ~AMateria(void);

        AMateria& operator=(const AMateria& );

        std::string const & getType(void) const;
        virtual AMateria*   clone(void) const = 0;
        virtual void        use(ICharacter& target);
    
    protected:
        std::string const type;
};

#endif