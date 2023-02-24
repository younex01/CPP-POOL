/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:54:37 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 03:45:04 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat : Default constructor called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain;
}

Cat::Cat(const Cat &cat)
{
    std::cout << "Cat : Copy constructor called" << std::endl;
    _brain = new Brain(*cat._brain);
    *this = cat;
}

Cat	&Cat::operator=(const Cat &cat)
{
    if (this != &cat)
    {
        this->_type = cat._type;
        this->_brain = new Brain(*cat._brain);
    }
	return *this;
}

Cat::~Cat()
{
    std::cout << "Cat : Destructor called" << std::endl;
    delete this->_brain;
}

std::string	Cat::getType() const
{
    return (this->_type);
}
void	Cat::makeSound() const
{
    std::cout << "MEOW MEOW!!" << std::endl;
}