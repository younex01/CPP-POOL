/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:54:32 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 18:51:12 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal : Default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal)
{
    std::cout << "AAnimal : Copy constructor called" << std::endl;
    *this = animal;
}

AAnimal	&AAnimal::operator=(const AAnimal &animal)
{
	this->_type = animal._type;
	return *this;
}

AAnimal::~AAnimal()
{
     std::cout << "AAnimal : Destructor called" << std::endl;
}

std::string	AAnimal::getType() const
{
    return (this->_type);
}