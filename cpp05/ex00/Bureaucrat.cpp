/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:59:27 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/23 14:05:27 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{

}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{

}

Bureaucrat::~Bureaucrat(void)
{
    
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs)
{
    
}

std::string Bureaucrat::getName(void) const
{

}
int         Bureaucrat::getGrade() const
{

}

std::ostream	&operator<<(std::ostream &stream, Bureaucrat const &f)
{
    stream << f.getName() << ", bureaucrat grade" << std::to_string(f.getGrade()) << std::endl;
	return (stream);
}

