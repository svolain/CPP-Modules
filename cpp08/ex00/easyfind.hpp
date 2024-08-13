/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:12:04 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/13 12:12:07 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

class ValueNotFoundException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Value not found";
    }
};

template <typename T>
void    easyfind(T& container, int toFind)
{
    if (std::find(container.begin(), container.end(), toFind) != container.end())
        std::cout << "Value found" << std::endl;
    else
        throw ValueNotFoundException();
};

#endif