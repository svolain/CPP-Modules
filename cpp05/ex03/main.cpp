/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:59:07 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/25 16:01:35 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    AForm* rrf;
    AForm* scf;
    AForm* ppf;
    AForm* noForm;


    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    ppf = someRandomIntern.makeForm("presidentia pardon", "Bender");
    noForm = someRandomIntern.makeForm("some random form", "Bender");

    delete rrf;
    delete scf;
    delete ppf;
    
}
   