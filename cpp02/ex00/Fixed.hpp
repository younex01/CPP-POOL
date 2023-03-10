/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:47:38 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/15 18:54:46 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int 			_value;
	static const int _fract = 8;
public:
	Fixed();
	Fixed(Fixed const & fixed);
	~Fixed();
	Fixed & operator=(Fixed const & fixed);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif