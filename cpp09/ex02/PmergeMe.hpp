/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:54:55 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/23 13:41:09 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <ctime>
# include <vector>
# include <list>
# include <unordered_set>
# include <exception>

class PmergeMe {
  public:
        PmergeMe(void);
        PmergeMe(const PmergeMe &src);
        ~PmergeMe(void);

        PmergeMe&	operator=(const PmergeMe &rhs); 

        void sortNumbers(char **numbers, int numbers_len);
        void parseNumbers(char **numbers, int numbers_len);

        class InvalidInputException : public std::exception {
            public:
                virtual const char* what() const throw();  
        };
};

#endif