/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:28:43 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/25 13:28:47 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
    
    public:
        PresidentialPardonForm(const std::string& target);
        PresidentialPardonForm(const PresidentialPardonForm& src);
        ~PresidentialPardonForm();

        PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);
        
        void execute(const Bureaucrat& executor) const;

    private:
        std::string _target;
        PresidentialPardonForm();
};

#endif