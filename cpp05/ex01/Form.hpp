/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:07:02 by svolain           #+#    #+#             */
/*   Updated: 2024/07/24 20:58:29 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:

        Form(void);
        Form(std::string name, int gradeSign, int gradeExecute);
        Form( const Form& src );
        ~Form();

        Form&       operator=( const Form& rhs );

        void        beSigned(const Bureaucrat& b);
        std::string getName(void) const;
        bool        getSigned(void) const;
        int         getGradeSign(void) const;
        int         getGradeExecute(void) const;

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
            bool                _signed;
            const int           _gradeSign;
            const int           _gradeExecute;
    
};

std::ostream	&operator<<(std::ostream &stream, Form const &f);

#endif