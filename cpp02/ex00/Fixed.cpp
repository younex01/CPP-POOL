/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:18:43 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/15 17:23:09 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :_value(0)
{
	std::cout << "Default constructor called" 
			  << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called"
			  << std::endl;
}

Fixed::Fixed(Fixed const & fixed)
{
	std::cout << "Copy constructor called"
			  << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called"
			  << std::endl;
	if(this != &fixed)
		this->_value = fixed.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called"
			  << std::endl;
	return (this->_value);
}
void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}