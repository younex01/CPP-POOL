/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:54:52 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 02:51:57 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat : Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat)
{
    std::cout << "WrongCat : Copy constructor called" << std::endl;
    *this = wrongcat;
}

WrongCat	&WrongCat::operator=(const WrongCat &wrongcat)
{
	this->_type = wrongcat._type;
	return *this;
}

WrongCat::~WrongCat()
{
     std::cout << "WrongCat : Destructor called" << std::endl;
}

std::string	WrongCat::getType() const
{
    return (this->_type);
}
void	WrongCat::makeSound() const
{
    std::cout << "MEOW MEOW!!" << std::endl;
}