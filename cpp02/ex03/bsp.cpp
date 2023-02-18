/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:52:59 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/18 22:53:24 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float areaTriangle( Point const a, Point const b, Point const c)
{
    float d;
    d = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()));
    return (d / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float d, d1, d2, d3;
    
    d = areaTriangle(a, b, c);
    d1 = areaTriangle(a, b, point);
    d2 = areaTriangle(b, c, point);
    d3 = areaTriangle(c, a, point);

    if(d1 == 0 || d2 == 0|| d3 == 0)
        return (0);
    else if((d1 + d2 + d3) == d)
        return (1);
    else
        return (0);
}