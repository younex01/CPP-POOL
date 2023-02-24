/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:54:42 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 03:45:32 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog : Default constructor called" << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain;
}

Dog::Dog(const Dog &dog)
{
    std::cout << "Dog : Copy constructor called" << std::endl;
    _brain = new Brain(*dog._brain);
    *this = dog;
}

Dog	&Dog::operator=(const Dog &dog)
{
    if (this != &dog)
    {
        this->_type = dog._type;
        this->_brain = new Brain(*dog._brain);
    }
	return *this;
}

Dog::~Dog()
{
    std::cout << "Dog : Destructor called" << std::endl;
    delete this->_brain;
}

std::string	Dog::getType() const
{
    return (this->_type);
}
void	Dog::makeSound() const
{
    std::cout << "WOOF WOOF!!" << std::endl;
}