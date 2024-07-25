/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:28:51 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/25 13:28:53 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): AForm("RobotomyRequestForm", 72, 45)
{
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src):  AForm( src ), _target( src._target )
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
    (void)rhs;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    if ( executor.getGrade() > this->getGradeExecute() )
        throw AForm::GradeTooLowException();
    else if (!this->getSigned())
        throw AForm::IsSignedException();
    else 
    {
        static int  i;
        if ( i % 2 == 0 )
            std::cout << "DRRRRRRRRRIILLLLLLL! " << _target << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomy failed! " << std::endl;
        i++;
    }
}
