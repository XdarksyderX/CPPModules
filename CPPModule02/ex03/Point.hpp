/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 23:13:30 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/06 23:40:12 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &point);
		~Point();

		Fixed getX() const;
		Fixed getY() const;

		Point &operator=(const Point &point);
		bool operator==(const Point &point);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif