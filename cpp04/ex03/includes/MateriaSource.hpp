/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:04:38 by svolain           #+#    #+#             */
/*   Updated: 2024/07/22 16:37:14 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &);
        ~MateriaSource(void);

        MateriaSource & operator=(MateriaSource const &);

        AMateria*   createMateria(std::string const & type);
        void        learnMateria(AMateria* m);
        
    private:
        AMateria*   inventory[4];
};

#endif