/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    easyfind.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:02:48 by svolain           #+#    #+#             */
/*   Updated: 2024/07/28 17:39:15 by svolain          ###   ########.fr       */
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