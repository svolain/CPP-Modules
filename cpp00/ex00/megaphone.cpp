/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 09:21:21 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/10 12:56:38 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm> 

int main(int argc, char **argv) {

    if (argc <= 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < argc; i++)
        {
            std::string s(argv[i]);
            std::transform(s.begin(), s.end(), s.begin(), ::toupper);
            std::cout << s;
            if (argc > 2)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}