/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:39:15 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/18 15:46:14 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0)
{
	Fixed x;
	Fixed y;
}

Point::Point(const Point& point): x(point.x), y(point.y)
{
}

Point::Point(const float xf, const float yf): x(xf), y(yf)
{
}

Point::~Point()
{
}

Fixed Point::getX( void ) const
{
	return x;
}

Fixed Point::getY( void ) const
{
	return y;
}
