/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:09:50 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/18 22:39:56 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    Fixed const _x;
    Fixed const _y;
public:
    Point();
    Point(const float x, const float y);
    // Point(const int x, const int y);
    // Point(const Fixed x, const Fixed y);
    Point & operator=(const Point &point);
    Point(const Point & point);
    float getX(void) const;
    float getY(void) const;
    ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
float areaTriangle( Point const a, Point const b, Point const c);


#endif