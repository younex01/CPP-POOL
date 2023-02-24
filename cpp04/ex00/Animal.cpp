/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:54:32 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 01:43:16 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal : Default constructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Animal : Copy constructor called" << std::endl;
    *this = animal;
}

Animal	&Animal::operator=(const Animal &animal)
{
	this->_type = animal._type;
	return *this;
}

Animal::~Animal()
{
     std::cout << "Animal : Destructor called" << std::endl;
}

std::string	Animal::getType() const
{
    return (this->_type);
}
void	Animal::makeSound() const
{
    std::cout << "NOT FOUND!!" << std::endl;
}