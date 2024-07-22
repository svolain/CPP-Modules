/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:23:29 by svolain           #+#    #+#             */
/*   Updated: 2024/07/22 16:25:21 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
}

Ice::Ice(Ice const & src): AMateria(src)
{
}
    
Ice::~Ice(void)
{
}

Ice & Ice::operator=(Ice const &)
{
    return (*this);
}

AMateria*   Ice::clone(void) const
{
    return (new Ice());
}

void        Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}