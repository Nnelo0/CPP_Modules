/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:35:50 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/11 10:19:48 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void HumanA::attack()
{
	if (_weapon.getType() == "none")
		std::cout << CYAN << _name << RESET << " attacks with nothing! "<< std::endl;
	else
		std::cout << CYAN << _name << RESET << " attacks with their " << GREEN <<_weapon.getType() << RESET << std::endl;
}