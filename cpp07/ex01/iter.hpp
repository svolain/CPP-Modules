/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:57:50 by svolain           #+#    #+#             */
/*   Updated: 2024/08/02 12:14:02 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void print(T t)
{
    std::cout << t << std::endl;
}

template <typename T>
void iter(T* arr, int len, void func(T const &))
{
    for (int i = 0; i < len; i++)
        func(arr[i]);
}

template <typename T>
void iter(T* arr, int len, void func(T&))
{
    for (int i = 0; i < len; i++)
        func(arr[i]);
}

#endif