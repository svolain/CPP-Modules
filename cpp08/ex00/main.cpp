/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:39:59 by svolain           #+#    #+#             */
/*   Updated: 2024/07/28 17:41:23 by svolain          ###   ########.fr       */
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
