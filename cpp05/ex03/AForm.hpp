/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:27:53 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/25 16:01:48 by vsavolai         ###   ########.fr       */
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
        virtual ~AForm();

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
            virtual const char* what() const throw();
        };

        private:
            std::string const   _name;
            bool                _signed;
            const int           _gradeSign;
            const int           _gradeExecute;
    
};

std::ostream	&operator<<(std::ostream &stream, AForm const &f);

#endif