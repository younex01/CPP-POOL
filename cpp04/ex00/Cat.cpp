/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:54:37 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 02:31:48 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat : Default constructor called" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(const Cat &cat)
{
    std::cout << "Cat : Copy constructor called" << std::endl;
    *this = cat;
}

Cat	&Cat::operator=(const Cat &cat)
{
	this->_type = cat._type;
	return *this;
}

Cat::~Cat()
{
     std::cout << "Cat : Destructor called" << std::endl;
}

std::string	Cat::getType() const
{
    return (this->_type);
}
void	Cat::makeSound() const
{
    std::cout << "MEOW MEOW!!" << std::endl;
}