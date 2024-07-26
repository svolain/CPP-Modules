/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 23:09:47 by svolain           #+#    #+#             */
/*   Updated: 2024/07/26 23:32:26 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data data = {"john", 55};
    
    uintptr_t raw = Serializer::serialize(&data);
	Data *res = Serializer::deserialize(raw);
	std::cout << "name: " << res->name << " | grade: " << res->grade << std::endl;
}