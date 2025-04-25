/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:35:59 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/23 09:17:30 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void HumanB::attack()
{
	if (_name == "")
		_name = "unknown";
	if (!_weapon || _weapon->getType() == "none")
		std::cout << CYAN << _name << RESET << " attacks with nothing! "<< std::endl;
	else
		std::cout << CYAN << _name << RESET << " attacks with their " << GREEN <<_weapon->getType() << RESET << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	_weapon = &newWeapon;
}