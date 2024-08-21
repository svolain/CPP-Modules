/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:07:45 by svolain           #+#    #+#             */
/*   Updated: 2024/08/21 21:02:20 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RNP_HPP
# define RNP_HPP

# include <iostream>
# include <string>
# include <stack>

class RPN {
    public:
		RPN(void);
		RPN(const RPN &src);
        ~RPN(void);

		RPN&	operator=(const RPN &rhs);
        
        bool    checkCalculation(const std::string& rpn);
        void	runRPN(const std::string& rpn);
	private:
		std::stack<int> _container;
};

#endif