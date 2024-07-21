/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:23:29 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 19:34:37 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
    std::cout << "Materia ice constructed";
}

Ice::Ice(Ice const & src): AMateria("ice")
{
    std::cout << "Materia ice copiedd"
}
    
Ice::~Ice(void)
{
    std::cout << "Materia ice destructed";
}

Ice & Ice::operator=(Ice const & rhs)
{
    if (this != &rhs)
        this->type = rhs.type;
    return (*this);
}

AMateria*   Ice::clone(void) const
{
    return (new Ice(*this));
}

void        Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}