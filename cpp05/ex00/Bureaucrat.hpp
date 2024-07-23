/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:12:33 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/23 11:24:00 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
    public:

        Bureaucrat(void);
        Bureaucrat(Bureaucrat const &src);
        ~Bureaucrat(void);

        Bureaucrat & operator=(Bureaucrat const &rhs);


        std::string getName(void) const;
        int         getGrade() const;  

    private:

        std::string const   _name;
        int                 _grade;
};

std::ostream	&operator<<(std::ostream &stream, Bureaucrat const &f);

#endif