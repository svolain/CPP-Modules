/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 23:09:47 by svolain           #+#    #+#             */
/*   Updated: 2024/07/27 14:57:10 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void)
{
    srand((unsigned) time(NULL));
	int random = rand() % 3;
    
    switch (random)
    {
    case 0:
        return new A;
    case 1:
        return new B;
    case 2:
        return new C;
    default:
        return new A;
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A\n";
    else if (dynamic_cast<B *>(p))
        std::cout << "B\n";
    else if (dynamic_cast<C *>(p))
        std::cout << "C\n";
}

void identify(Base& p)
{
    try 
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A\n";
    } 
    catch (std::exception &e) 
    {}
    try 
    {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B\n";
    } catch (std::exception &e) 
    {}
    try 
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C\n";
    } catch (std::exception &e) 
    {}
}

int main(void)
{
    Base *a = generate();
    std::cout << "-------identify pointer-------\n";
    identify(a);
    std::cout << "-------identify reference-------\n";
    identify(*a);
    delete a;
}