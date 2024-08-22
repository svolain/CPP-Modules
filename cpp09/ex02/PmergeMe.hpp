/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:54:55 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/22 11:34:11 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <ctime>
#include <vector>
#include <list>
#include <exception>

class PmergeMe {
  public:
        PmergeMe(void);
        PmergeMe(const PmergeMe &src);
        ~PmergeMe(void);

        PmergeMe&	operator=(const PmergeMe &rhs);  
};

#endif