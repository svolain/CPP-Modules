/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:23:06 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 17:43:51 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
    Ice(void);
    Ice(Ice const & src);
    ~Ice(void);

    Ice & operator=(Ice const & rhs);

    virtual AMateria*   clone(void) const;
    virtual void        use(ICharacter& target);
};

#endif