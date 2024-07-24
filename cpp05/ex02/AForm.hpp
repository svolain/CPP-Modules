/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:07:02 by svolain           #+#    #+#             */
/*   Updated: 2024/07/24 23:32:46 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    public:

        AForm(void);
        AForm(std::string name, int gradeSign, int gradeExecute);
        AForm( const AForm& src );
        ~AForm();

        AForm&              operator=( const AForm& rhs );

        void                beSigned(const Bureaucrat& b);
        std::string         getName(void) const;
        bool                getSigned(void) const;
        int                 getGradeSign(void) const;
        int                 getGradeExecute(void) const;
        virtual void        execute( const Bureaucrat& executor ) const = 0;

        class GradeTooHighException : public std::exception {
            public:
                const char *what() const throw();
                
        };
        
        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };

        class IsSignedException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Form not signed"; }
        };

        private:
            std::string const   _name;
            bool                _signed;
            const int           _gradeSign;
            const int           _gradeExecute;
    
};

std::ostream	&operator<<(std::ostream &stream, AForm const &f);

#endif