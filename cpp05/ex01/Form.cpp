/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:06:55 by svolain           #+#    #+#             */
/*   Updated: 2024/07/24 21:48:17 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*----------canonical form----------*/

Form::Form(void): _name("Default"), _signed(false), _gradeSign(lowest), _gradeExecute(lowest)
{
}

Form::Form(std::string name, int gradeSign, int gradeExecute): _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
    if (gradeSign < highest )
        throw Form::GradeTooHighException();
    if (gradeSign > lowest)
        throw Form::GradeTooLowException();
}

Form::Form( const Form& src ): _name(src._name), _signed(src._signed), _gradeSign(src._gradeSign), _gradeExecute(src._gradeExecute)
{
}

Form::~Form()
{

}

Form&       Form::operator=( const Form& rhs )
{
    if (this != &rhs)
        this->_signed = rhs._signed;
    return *this;
}

/*----------Form public----------*/

void        Form::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > this->_gradeSign)
        throw Form::GradeTooLowException();
    this->_signed = true;
}

std::string Form::getName(void) const
{
    return this->_name;
}

bool        Form::getSigned(void) const
{
    return this->_signed;
}

int   Form::getGradeSign(void) const
{
    return this->_gradeSign;
}

int   Form::getGradeExecute(void) const
{
    return this->_gradeExecute;
}

/*----------Form exception classes----------*/

const char * Form::GradeTooHighException::what() const throw()
{
    return "Grade too high\n";
}

const char * Form::GradeTooLowException::what() const throw()
{
    return "Grade too low\n";
}

/*----------<< overflow----------*/

std::ostream	&operator<<(std::ostream &stream, Form const &f)
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