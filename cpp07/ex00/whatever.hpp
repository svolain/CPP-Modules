/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 15:43:20 by svolain           #+#    #+#             */
/*   Updated: 2024/07/27 16:46:22 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T> 
T min(T a, T b)
{
    if (b < a)
        return b;
    return a;
}

template <typename T> 
T max(T a, T b)
{
    if (b > a)
        return b;
    return a;
}

template <typename T> 
void swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

#endif