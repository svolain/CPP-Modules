/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:09:07 by svolain           #+#    #+#             */
/*   Updated: 2024/07/29 21:08:03 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include<limits>
#include <exception>

class Span
{
    public:
        Span(unsigned int n);
        Span(Span const &src);
        ~Span();

        Span &operator=(Span const &rhs);

        void addNumber(int number);
        int shortestSpan() const;
        int longestSpan() const;

        void printSpan(void);

        class MaxSizeReached : public std::exception {
        public:
            const char* what() const noexcept override {
            return "Beyond maximum size";
            }
    };

    private:
        unsigned int        _maxSize;
        std::vector<int>    _vec;
        
        Span();
};

#endif