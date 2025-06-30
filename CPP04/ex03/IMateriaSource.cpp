/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:47:36 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/30 21:25:28 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
}

IMateriaSource::IMateriaSource(const IMateriaSource &ImateriaSource)
{
	*this = ImateriaSource;
}

IMateriaSource &IMateriaSource::operator=(const IMateriaSource &ImateriaSource)
{
	if (this != &ImateriaSource)
	{
		*this = ImateriaSource;
	}
	return *this;
}