/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:36:06 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/23 09:12:54 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	_type = "none";
}

Weapon::Weapon(std::string type)
{
	if (type == "")
		_type = "none";
	else
		_type = type;
	return ;
}

Weapon::~Weapon()
{
	return ;
}

const std::string Weapon::getType()
{
	return _type;
}

void Weapon::setType(std::string newvalue)
{
	 _type = newvalue;
}