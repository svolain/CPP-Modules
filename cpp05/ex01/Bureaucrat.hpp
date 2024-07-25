/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:35:06 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/25 13:35:08 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

# define lowest 150
# define highest 1

class Bureaucrat
{
    public:

        Bureaucrat(void);
        Bureaucrat(std::string const name, int grade);  
        Bureaucrat(Bureaucrat const &src);
        ~Bureaucrat(void);

        Bureaucrat & operator=(Bureaucrat const &rhs);

        std::string getName(void) const;
        int         getGrade() const;  
        void        increaseGrade();
        void        decreaseGrade();
        void        signForm(Form &f);

        class GradeTooHighException : public std::exception {
            public:
                const char *what() const throw();
                
        };
        
        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };

    private:

        std::string const   _name;
        int                 _grade;
};

std::ostream	&operator<<(std::ostream &stream, Bureaucrat const &f);

#endif