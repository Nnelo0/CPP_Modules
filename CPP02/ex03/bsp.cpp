/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:30:08 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/25 09:09:28 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area(Point const p1, Point const p2, Point const p3)
{
	float res = 0.5f * std::abs(
								(p1.getX() * (p2.getY() - p3.getY())
								+ p2.getX() * (p3.getY() - p1.getY())
								+ p3.getX() * (p1.getY() - p2.getY())).toFloat());	
	return res;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float areaABC = area(a, b, c);
	
	float areaPBC = area(point, b, c);
	float areaPAC = area(point, a, c);
	float areaPBA = area(point, b, a);

	if (!areaPAC || !areaPBA || !areaPBC)
		return false;
	return (std::abs((areaPAC + areaPBA + areaPBC) - areaABC) < 0.0001f);
}
