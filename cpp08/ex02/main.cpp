/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:12:47 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/13 13:53:07 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    std::cout << "testing stack iterators" << std::endl;

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "\nlist iterators with same values" << std::endl;

    std::list<int> mslist;
    mslist.push_back(5);
    mslist.push_back(17);
    std::cout << mslist.back() << std::endl;
    mslist.pop_back();
    std::cout << mslist.size() << std::endl;
    mslist.push_back(3);
    mslist.push_back(5);
    mslist.push_back(737);
    //[...]
    mslist.push_back(0);
    std::list<int>::iterator lit = mslist.begin();
    std::list<int>::iterator lite = mslist.end();
    ++lit;
    --lit;
    while (lit != lite)
    {
        std::cout << *lit << std::endl;
        ++lit;
    }
    return 0;
}