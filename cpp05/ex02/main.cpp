/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:59:07 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/25 13:16:45 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat b("John", 1);
    Bureaucrat c("James", 44);
    Bureaucrat d("Joe", 136);
    Bureaucrat e("Jethro", 150);

    PresidentialPardonForm f1("A28");
    RobotomyRequestForm f2("X-C45");
    ShrubberyCreationForm f3("./");

    std::cout << "\n-----Test executing forms without signing-----\n\n";
    
    try
    {
        f1.execute(b);
    }
    catch(const AForm::IsSignedException& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        f2.execute(c);
    }
    catch(const AForm::IsSignedException& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        f3.execute(d);
    }
    catch(const AForm::IsSignedException& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n-----Test executing forms with signing-----\n\n";
    
    f1.beSigned(b);
    f2.beSigned(c);
    f3.beSigned(d);

    f1.execute(b);
    f2.execute(c);
    f3.execute(d);

    std::cout << "\n-----Test executing with too low grade-----\n\n";
    
    try
    {
        f1.execute(c);
    }
    catch(const AForm::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        f2.execute(d);
    }
    catch(const AForm::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        f3.execute(e);
    }
    catch(const AForm::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
   