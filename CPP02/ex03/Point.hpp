/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:38:53 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/18 18:37:50 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Fixed.hpp"

class Point
{
	private:

		Fixed const x;
		Fixed const y;

	public:

		Point();
		Point(const Point& point);
		Point(const float x, const float y);

		Point& operator=(const Point& point);
		
		~Point();

		Fixed getX( void ) const;
		Fixed getY( void ) const;

};

bool bsp(const Point a, const Point b, const Point c, const Point point);
