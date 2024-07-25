/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 21:52:48 by svolain           #+#    #+#             */
/*   Updated: 2024/07/25 12:50:41 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("ShrubberyCreationForm", 145, 137)
{
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src):  AForm( src ), _target( src._target )
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
    (void)rhs;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    if ( executor.getGrade() > this->getGradeExecute() )
        throw AForm::GradeTooLowException();
    else if (!this->getSigned())
        throw AForm::IsSignedException();
    else 
    {
        std::ofstream file( this->getName() + "_shrubbery" );
        file << "    (     )     " << std::endl;
        file << "   (       )    " << std::endl;
        file << "    (     )     " << std::endl;
        file << "     |   |      " << std::endl;
        file << "     |   |      " << std::endl;
        file << "     |   |      " << std::endl;
        file << "     |   |      " << std::endl;
    }
}