/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:33:49 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/25 13:33:53 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm: public AForm
{
    public:
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& src);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);
        
        void execute(const Bureaucrat& executor) const;

    private:
        std::string _target;
        ShrubberyCreationForm();
};

#endif