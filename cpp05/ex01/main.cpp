/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:34:47 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/25 13:34:49 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << "\n-----Test << operator and getters-----\n\n";
    
    Bureaucrat b("John", 100);
    Form       f("A1", 100, 100);

    std::cout << "Form a1 getters: \n" << f.getName() << "\n" << f.getGradeSign() << "\n" << f.getGradeExecute() << "\n" << f.getSigned();
    std::cout << "<< operator: \n" << f;

    std::cout << "\n-----Test signForm-----\n\n";

    std::cout << "b grade: " << b.getGrade() << "\nform grade to be signed: " << f.getGradeSign() << "\n";
    b.signForm(f);

    std::cout << "\n-----Test Form exceptions-----\n\n";
    b.decreaseGrade();
    std::cout << "b grade: " << b.getGrade() << "\nform grade to be signed: " << f.getGradeSign() << "\n";
    b.signForm(f);
}
   