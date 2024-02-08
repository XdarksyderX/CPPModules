/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 23:34:21 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/06 23:52:02 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static int abs(int value)
{
	return (value < 0) ? -value : value;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    if ((Point)a == b || (Point)a == c || (Point)b == c)
        return false;

    Fixed a1 = (b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX());
    Fixed a2 = (c.getX() - b.getX()) * (point.getY() - b.getY()) - (c.getY() - b.getY()) * (point.getX() - b.getX());
    Fixed a3 = (a.getX() - c.getX()) * (point.getY() - c.getY()) - (a.getY() - c.getY()) * (point.getX() - c.getX());

    if (abs(a1.getRawBits()) + abs(a2.getRawBits()) + abs(a3.getRawBits()) == abs((a1 + a2 + a3).getRawBits()))
        return true;
    return false;
}