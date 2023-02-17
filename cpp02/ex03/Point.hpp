/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:09:50 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/17 21:46:38 by yelousse         ###   ########.fr       */
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
    Point & operator=(const Point &point);
    Point(const Point & point);
    void setX(const Fixed &x);
    void setY(const Fixed y);
    Fixed getX(void) const;
    Fixed getY(void) const;
    ~Point();
};

Point::Point(): _x(0), _y(0)
{
}


Point::Point(const Point & point)
{
    *this = point;
}

// Point::Point(const float x, const float y)
// {
//     this->_x.setRawBits(x);
//     this->_y.setRawy;
// }

Point & Point::operator=(const Point &point)
{
    if(this != &point)
        this.
}

Point::~Point()
{
}

void Point::setX(const Fixed & x)
{
    this->&_x = x;
}
void Point::setY(const Fixed y)
{
    this->_y = y;
}
Fixed Point::getX(void) const
{
    
}
Fixed getY(void) const
{
    
}


#endif