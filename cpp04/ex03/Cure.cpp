/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:08:09 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 19:22:28 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
    std::cout << "Materia cure constructed";
}

Cure::Cure(Cure const & src): AMateria("cure") 
{
    std::cout << "Materia cure copied";
}

Cure::~Cure(void)
{
    std::cout << "Materia cure destructed";
}

Cure & Cure::operator=(Cure const & rhs)
{
    if (this != &rhs)
        this->type = rhs.type;
    return (*this);
}

AMateria*   Cure::clone(void) const
{
    return (new Cure(*this));
}

void        Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}