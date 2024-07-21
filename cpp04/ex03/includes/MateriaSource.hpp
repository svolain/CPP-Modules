/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:04:38 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 20:04:49 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const & src);
        ~MateriaSource(void);

        MateriaSource & operator=(MateriaSource const & rhs);

        AMateria*   getMateria(std::string const & type);
        AMateria*   createMateria(std::string const & type);
        void        learnMateria(AMateria* m);
    private:
        AMateria*   materias[4];
};

#endif