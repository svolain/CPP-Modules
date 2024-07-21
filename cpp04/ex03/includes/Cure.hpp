/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:21:25 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 17:43:26 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
 {
    public:
        Cure(void);
        Cure(Cure const & src);
        ~Cure(void);

        Cure & operator=(Cure const & rhs);

        virtual AMateria*   clone(void) const;
        virtual void        use(ICharacter& target);
 };

#endif