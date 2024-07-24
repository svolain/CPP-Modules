/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:59:07 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/24 14:29:58 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "\n-----Test copying, << operator and getters-----\n\n";
    Bureaucrat b("Gil", 100);
    Bureaucrat c = b;
    Bureaucrat d(b);

    std::cout << b;
    std::cout << c;
    std::cout << d;

    std::cout << "\n-----Test increaseGrade and decreaseGrade-----\n\n";

    std::cout << "b Before increase: " << b.getGrade() << std::endl;
    b.increaseGrade();
    std::cout << "b after increase: " << b.getGrade() << std::endl;
    std::cout << "b Before decrease: " << b.getGrade() << std::endl;
    b.decreaseGrade();
    std::cout << "b after decrease: " << b.getGrade() << std::endl;

    std::cout << "\n-----Test catching grade exceptions----\n\n";

    try
    {
        Bureaucrat e("John", 151);
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what();
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what();
    }

    try
    {
        Bureaucrat f("John", 0);
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what();
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what();
    }

    Bureaucrat g("James", 1);
    
    
    try
    {
        g.increaseGrade();
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what();
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what();
    }
    
    }