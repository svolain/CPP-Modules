/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:33:57 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/22 11:33:59 by vsavolai         ###   ########.fr       */
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