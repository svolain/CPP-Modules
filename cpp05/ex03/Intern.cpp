/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:28:18 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/25 15:49:21 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(Intern const &src)
{
    *this = src;
}

Intern::~Intern(void)
{
}

Intern & Intern::operator=(Intern const &rhs)
{
    (void)rhs;
    return *this;
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    AForm*  f;
    int     f_index = 0;
    
    std::string forms[3] = {"robotomy request", "shrubbery creation", "presidentia pardon"};
    for (std::string form : forms)
    {
        if (name == form)
            break;
        f_index++;
    }
    switch (f_index)
    {
    case 0:
        f = new RobotomyRequestForm(target);
        break;
    case 1:
        f = new ShrubberyCreationForm(target);
        break;
    case 2:
        f = new PresidentialPardonForm(target);
        break;
    default:
        std::cout << "Intern cant create form " << name << std::endl;
        return nullptr;
    }
    std::cout << "Intern creates " << name << std::endl;
    return f;
}