/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:23:06 by svolain           #+#    #+#             */
/*   Updated: 2024/07/22 16:25:13 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice(void);
        Ice(Ice const &);
        ~Ice(void);

        Ice & operator=(Ice const &);

        AMateria*   clone(void) const;
        void        use(ICharacter& target);
};

#endif