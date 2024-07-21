/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:13:23 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 18:40:03 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AMateria.hpp"

AMateria::AMateria(void): type("")
{
    std::cout << "AMateria constructed\n";
}

AMateria::AMateria(std::string const & type): type(type)
{
    std::cout << "AMateria " << this->type << " constructed\n";
}

AMateria::AMateria(AMateria & const src): type(src.type)
{
}

 AMateria::~AMateria(void)
 {
    std::cout << "AMateria " << this->type << " destructed\n";
 }

AMateria&  AMateria::operator=(const AMateria& rhs)
 {
    return (*this);
 }

std::string const & AMateria::getType(void) const
{
    return (this->type);
}

AMateria*   AMateria::clone(void) const
{
    return (AMateria*)this;
}

void        AMateria::use(ICharacter& target)
{
    std::cout << "AMateria " << this->type << " used on " << target.getName() << std::endl;
}