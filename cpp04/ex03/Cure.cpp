/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:08:09 by svolain           #+#    #+#             */
/*   Updated: 2024/07/22 16:25:20 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
}

Cure::Cure(Cure const & src): AMateria(src) 
{
}

Cure::~Cure(void)
{
}

Cure & Cure::operator=(Cure const & )
{
    return (*this);
}

AMateria*   Cure::clone(void) const
{
    return (new Cure());
}

void        Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}