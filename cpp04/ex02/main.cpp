/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:32:26 by svolain           #+#    #+#             */
/*   Updated: 2024/07/21 15:23:31 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongCat.hpp"

int main()
{ 
    
    std::cout << "\n-----testing copies are deep-----\n\n";
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    
    delete j;
    delete i;
    
    std::cout << "\n-----Creating animal array-----\n\n";
    const AAnimal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};


    std::cout << "\n-----Testing brain activity-----\n\n";
    const Dog* d = dynamic_cast<const Dog*>(animals[0]);
    d->setBrains("food");
    d->setBrains("scrubs");
    d->setBrains("chase tail");
    d->printBrains();

    const Cat* c = dynamic_cast<const Cat*>(animals[2]);
    c->setBrains("mouse"); 
    c->printBrains();

    std::cout << "\n-----Deleting all the animals from the array-----\n\n";
    for (int i = 0; i < 4; i++)
        delete animals[i];
    return 0;


    
}
