/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:28:01 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/25 13:28:04 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*----------canonical form----------*/

Bureaucrat::Bureaucrat(void): _name("Default"), _grade(lowest)
{
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name)
{
    if (grade < highest)
        throw GradeTooHighException();
    if (grade > lowest)
        throw GradeTooLowException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): _name(src._name), _grade(src._grade)
{
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (this != &rhs)
        this->_grade = rhs._grade;
    return *this;
}

/*----------Bureaucrat public----------*/

std::string Bureaucrat::getName(void) const
{
    return this->_name;
}

int         Bureaucrat::getGrade() const
{
    return this->_grade;
}

void        Bureaucrat::increaseGrade()
{
    if (this->_grade <= highest)
        throw GradeTooHighException();
    this->_grade--;
}

void        Bureaucrat::decreaseGrade()
{
    if (this->_grade >= lowest)
        throw GradeTooLowException();
    this->_grade++;
}


void        Bureaucrat::signForm(AForm &f)
{
    try {
        f.beSigned( *this );
        std::cout << this->_name << " signed " << f.getName() << std::endl;
    } catch ( AForm::GradeTooLowException& e ) {
        std::cout << _name << " coulnd't sign " << f.getName() << " because " << e.what() << std::endl;
    }
}

void    Bureaucrat::executeForm( const AForm& f ) const {
    try {
        f.execute( *this );
    } catch ( std::exception& e ) {
        std::cout << _name << " couldn't execute " << f.getName() << " because " << e.what() << std::endl;
    }
}

/*----------Bureaucrat exception classes----------*/


const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high\n";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low\n";
}

/*----------<< overflow----------*/

std::ostream	&operator<<(std::ostream &stream, Bureaucrat const &f)
{
    stream << f.getName() << ", bureaucrat grade " << f.getGrade() << std::endl;
	return (stream);
}

