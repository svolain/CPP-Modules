/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:36:42 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 20:05:16 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    for (int i = 0; i < 4; i++)
            this->materias[i] = src.materias[i];
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        if (this->materias[i])
            delete this->materias[i];
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
    for (int i = 0; i < 4; i++)
        if (this->materias[i])
            delete this->materias[i];
        
    for (int i = 0; i < 4; i++)
    {
        if (rhs.materias[i])
             this->materias[i] = rhs.materias[i];
            else
             this->materias[i] = NULL;
    }
    return (*this);
}

AMateria*   MateriaSource::getMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] && this->materias[i]->getType() == type)
            return (materias[i]);
        return NULL;
    }
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] && this->materias[i]->getType() == type)
            return (materias[i]->clone());
        return NULL;
    }
}

void        MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] == NULL)
        {
            materias[i] = m;
        }
    }
}