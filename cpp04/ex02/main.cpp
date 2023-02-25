/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:54:47 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 18:57:34 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	AAnimal	*animals[4];
	// AAnimal cat;

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 4; i++)
		std::cout << animals[i]->getType() << std::endl;
	for (int i = 0; i < 4; i++)
		delete	animals[i];

	// Cat *cat = new Cat();
    // Cat *cat2 = new Cat();

    // cat->setIdea("idea1");
    // cat->setIdea("idea2");
    // cat->setIdea("idea3");
    // cat->setIdea("idea4");

    // *cat2 = *cat;

    // delete cat;
    
    // std::cout << cat2->getIdea(1) << std::endl;
  
    // delete cat2;
    return (0);

}