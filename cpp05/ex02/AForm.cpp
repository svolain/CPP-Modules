/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:06:55 by svolain           #+#    #+#             */
/*   Updated: 2024/07/24 23:33:30 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*----------canonical form----------*/

AForm::AForm(void): _name("Default"), _signed(false), _gradeSign(lowest), _gradeExecute(lowest)
{
}

AForm::AForm(std::string name, int gradeSign, int gradeExecute): _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
    if (gradeSign < highest )
        throw AForm::GradeTooHighException();
    if (gradeSign > lowest)
        throw AForm::GradeTooLowException();
}

AForm::AForm( const AForm& src ): _name(src._name), _signed(src._signed), _gradeSign(src._gradeSign), _gradeExecute(src._gradeExecute)
{
}

AForm::~AForm()
{
}

AForm&       AForm::operator=( const AForm& rhs )
{
    if (this != &rhs)
        this->_signed = rhs._signed;
    return *this;
}

/*----------Form public----------*/

void        AForm::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > this->_gradeSign)
        throw AForm::GradeTooLowException();
    this->_signed = true;
}

std::string AForm::getName(void) const
{
    return this->_name;
}

bool        AForm::getSigned(void) const
{
    return this->_signed;
}

int   AForm::getGradeSign(void) const
{
    return this->_gradeSign;
}

int   AForm::getGradeExecute(void) const
{
    return this->_gradeExecute;
}

/*----------Form exception classes----------*/

const char * AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high\n";
}

const char * AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low\n";
}

const char * AForm::IsSignedException::what() const throw()
{
    return "Form not signed\n";
}

/*----------<< overflow----------*/

std::ostream	&operator<<(std::ostream &stream, AForm const &f)
{
    stream << "------------FROM-----------\n";
    stream << "Name:_____________" << f.getName() << std::endl;
    stream << "Grade to sign:____" << f.getGradeSign() << std::endl;
    stream << "Grade to execute:_" << f.getGradeSign() << std::endl;
    stream << "Signed:___________";
    if (f.getSigned())
        stream << "Yes\n";
    else
        stream << "No\n";
    stream << "---------------------------\n";
    return (stream);
}