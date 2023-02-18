/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:24:32 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/18 20:33:59 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int 			_value;
	static const int _fract = 8;
public:
	Fixed();
	Fixed(const Fixed & fixed);
	Fixed(const int n);
	Fixed(const float n);
	~Fixed();
	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	Fixed & operator=(const Fixed & fixed);
	Fixed operator+(Fixed const & fixed) const;
	Fixed operator-(Fixed const & fixed) const;
	Fixed operator*(Fixed const & fixed) const;
	Fixed operator/(Fixed const & fixed) const;
	bool operator>(Fixed const & fixed) const;
	bool operator<(Fixed const & fixed) const;
	bool operator>=(Fixed const & fixed) const;
	bool operator<=(Fixed const & fixed) const;
	bool operator==(Fixed const & fixed) const;
	bool operator!=(Fixed const & fixed) const;
	int	getRawBits(void) const;
	void setRawBits(const int raw);
	float toFloat( void ) const;
	int toInt( void ) const;
	static const Fixed &max(const Fixed &a, const Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static const Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &min(Fixed &a, Fixed &b);
	Fixed	operator*(const float &fixed) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & fixed);

#endif

//sign
//mantissa
//exponent