/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:31:59 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/07 11:32:00 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

Point::Point(const Point &point) : x(point.x), y(point.y)
{
}

Point::~Point()
{
}

Fixed Point::getX() const
{
	return x;
}

Fixed Point::getY() const
{
	return y;
}

Point &Point::operator=(const Point &other)
{
	if (this != &other)
	{
		(Fixed) this->x = (other.getX());
		(Fixed) this->y = (other.getY());
	}
	return *this;
}

bool Point::operator==(const Point &other)
{
	return ((Fixed) this->x == other.getX() && (Fixed) this->y == other.getY());
}