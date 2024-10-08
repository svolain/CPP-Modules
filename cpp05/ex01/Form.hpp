/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:34:52 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/25 13:34:54 by vsavolai         ###   ########.fr       */
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