/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:54:47 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 03:48:59 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();

//     std::cout << "----------------------------" << std::endl;
    
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();

//     std::cout << "----------------------------" << std::endl;
    
//     delete meta;
// 	delete j;
// 	delete i;

//     std::cout << "----------------------------" << std::endl;

//     // const WrongAnimal* meta = new WrongAnimal();
//     const WrongAnimal* cat = new WrongCat();
//     cat->makeSound();
//     delete cat;
//     return 0;
// }

// int main()
// {
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// delete j;//should not create a leak
// delete i;
// ...
// return 0;
// }

int main()
{
	Animal	*animals[6];
	Brain	brain;

	for (int i = 0; i < 6; i++)
	{
		if (i < 3)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 6; i++)
		std::cout << animals[i]->getType() << std::endl;
	for (int i = 0; i < 6; i++)
		delete	animals[i];

	return 0;
}