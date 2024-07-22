/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:21:25 by svolain           #+#    #+#             */
/*   Updated: 2024/07/22 16:25:12 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
 {
    public:
        Cure(void);
        Cure(Cure const &);
        ~Cure(void);

        Cure & operator=(Cure const &);

        AMateria*   clone(void) const;
        void        use(ICharacter& target);
 };

#endif