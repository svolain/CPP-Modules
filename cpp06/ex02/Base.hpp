/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 13:44:41 by svolain           #+#    #+#             */
/*   Updated: 2024/07/27 14:50:57 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <exception>
# include<cstdlib>
# include <string>

class Base 
{
public:
  virtual ~Base() {}
};

class A : public Base 
{};
class B : public Base 
{};
class C : public Base 
{};

#endif
