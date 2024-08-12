/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:01:50 by svolain           #+#    #+#             */
/*   Updated: 2024/08/12 09:38:20 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


template <typename T>
void print(T &t)
{
    std::cout << t << std::endl;
}

int main(void)
{
    int ints[4] = {1, 2, 3, 4};
    std::string strs[2] = {"test", "test"};

    iter(ints, 4, print<int>);
    iter(strs, 2, print<std::string>);

    return 0;
}
