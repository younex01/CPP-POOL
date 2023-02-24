/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:54:42 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 02:32:36 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog : Default constructor called" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(const Dog &dog)
{
    std::cout << "Dog : Copy constructor called" << std::endl;
    *this = dog;
}

Dog	&Dog::operator=(const Dog &dog)
{
	this->_type = dog._type;
	return *this;
}

Dog::~Dog()
{
     std::cout << "Dog : Destructor called" << std::endl;
}

std::string	Dog::getType() const
{
    return (this->_type);
}
void	Dog::makeSound() const
{
    std::cout << "WOOF WOOF!!" << std::endl;
}