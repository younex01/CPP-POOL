/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:24:32 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/16 18:17:25 by yelousse         ###   ########.fr       */
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
	Fixed & operator=(const Fixed & fixed);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & fixed);

#endif