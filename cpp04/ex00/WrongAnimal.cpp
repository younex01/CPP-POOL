/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 01:51:30 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 02:51:35 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal : Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ronganimal)
{
    std::cout << "WrongAnimal : Copy constructor called" << std::endl;
    *this = ronganimal;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &ronganimal)
{
	this->_type = ronganimal._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
     std::cout << "WrongAnimal : Destructor called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
    return (this->_type);
}
void	WrongAnimal::makeSound() const
{
    std::cout << "NOT FOUND!!" << std::endl;
}