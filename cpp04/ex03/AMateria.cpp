/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:13:23 by svolain           #+#    #+#             */
/*   Updated: 2024/07/22 16:25:19 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::AMateria(std::string const & type): type(type)
{
}

AMateria::AMateria(AMateria const &src): type(src.type)
{
}

 AMateria::~AMateria(void)
 {
 }

AMateria&  AMateria::operator=(const AMateria&)
 {
    return *this;
 }

std::string const & AMateria::getType(void) const
{
    return this->type;
}

void        AMateria::use(ICharacter&)
{
}