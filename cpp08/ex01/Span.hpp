/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:09:07 by svolain           #+#    #+#             */
/*   Updated: 2024/08/13 12:35:04 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <limits>
# include <exception>
# include <iterator>

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
        void addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);

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