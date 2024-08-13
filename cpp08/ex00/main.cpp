/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:12:13 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/13 12:12:14 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main() {
    try {
        std::vector<int> vec = {1, 2, 3, 4, 5};
        
        easyfind(vec, 3);  
        easyfind(vec, 6);  
    } catch (const ValueNotFoundException& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
