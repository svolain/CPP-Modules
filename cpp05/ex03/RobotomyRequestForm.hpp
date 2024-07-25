/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:28:58 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/25 13:29:01 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
    public:
        RobotomyRequestForm(const std::string& target);
        RobotomyRequestForm(const RobotomyRequestForm& src);
        ~RobotomyRequestForm();

        RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);
        
        void execute(const Bureaucrat& executor) const;

    private:
        std::string _target;
        RobotomyRequestForm();
};

#endif