/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:24:29 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/17 21:36:07 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :_value(0)
{
	std::cout << "Default constructor called" 
			  << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called"
			  << std::endl;
	this->_value = n << this->_fract;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called"
			  << std::endl;
	this->_value = roundf(n * (1 << this->_fract));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called"
			  << std::endl;
}

Fixed::Fixed(const Fixed & fixed)
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
		this->setRawBits(fixed.getRawBits());
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}
void	Fixed::setRawBits(const int raw)
{
	this->_value = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_value / (float)(1 << this->_fract));
}

int Fixed::toInt( void ) const
{
	return (this->_value >> this->_fract);
}

std::ostream & operator<<(std::ostream & o, Fixed const & fixed)
{
	o << fixed.toFloat();
	return o;
}

Fixed Fixed::operator+(const Fixed &fixed) const {
	
	return Fixed(this->_value + fixed.getRawBits());
}

Fixed Fixed::operator-(const Fixed &fixed) const {
	
	return Fixed(this->_value - fixed.getRawBits());
}

Fixed Fixed::operator*(const Fixed &fixed) const {
	Fixed tmp;
	
	long long n = this->_value * fixed.getRawBits();
	tmp._value = n >> this->_fract;
	return tmp;
}

Fixed Fixed::operator/(const Fixed &fixed) const {

	if(fixed._value == 0)
		return Fixed();
	return Fixed((this->_value / fixed.getRawBits()) << this->_fract);
}

bool Fixed::operator>(Fixed const & fixed) const
{
	return (this->_value > fixed.getRawBits());
}
bool Fixed::operator<(Fixed const & fixed) const
{
	return (this->_value < fixed.getRawBits());
}
bool Fixed::operator>=(Fixed const & fixed) const
{
	return (this->_value >= fixed.getRawBits());
}
bool Fixed::operator<=(Fixed const & fixed) const
{
	return (this->_value <= fixed.getRawBits());
}
bool Fixed::operator==(Fixed const & fixed) const
{
	return (this->_value == fixed.getRawBits());
}
bool Fixed::operator!=(Fixed const & fixed) const
{
	return (this->_value != fixed.getRawBits());
}

Fixed &Fixed::operator++()
{
	this->_value++;
	return *this;
}

Fixed &Fixed::operator--()
{
	this->_value--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed ret(*this);
	this->_value++;
	return ret;
}

Fixed Fixed::operator--(int)
{
	Fixed ret(*this);
	this->_value--;
	return ret;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

const Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

const Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}
