/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 23:11:30 by svolain           #+#    #+#             */
/*   Updated: 2024/07/29 09:28:58 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdint>

struct Data
{
	std::string name;
	int         grade;
};

class Serializer
{
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

    private:
        Serializer(void);
        ~Serializer(void);
        Serializer(Serializer const & src);
        Serializer& operator=(const Serializer& other);
};

#endif