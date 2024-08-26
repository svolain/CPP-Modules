/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:54:55 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/26 11:15:38 by vsavolai         ###   ########.fr       */
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
        bool parseNumbers(char **numbers, int numbers_len);

        class InvalidInputException : public std::exception {
            public:
                virtual const char* what() const throw();  
        };
};

#endif