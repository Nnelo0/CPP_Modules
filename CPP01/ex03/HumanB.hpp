/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:36:01 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/10 09:01:40 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		
		std::string _name;
		Weapon *_weapon;
		
	public:
	
	HumanB(std::string name);
	~HumanB();

	void attack();
	void setWeapon(Weapon &newWeapon);
};

