/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:24:35 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/18 22:52:03 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	Point const	a(5, 6);
	Point const	b(10, 12);
	Point const	c(15, 6);
	Point const point(7, 7);

	if (bsp(a, b, c, point))
		std::cout << "the point is inside the triangle" << std::endl;
	else
		std::cout << "the point is outside the triangle" << std::endl;
	return (0);
}