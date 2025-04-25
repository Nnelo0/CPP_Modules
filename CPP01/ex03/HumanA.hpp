/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:35:57 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/11 10:14:50 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"



class HumanA
{
	private:
		
		std::string _name;
		Weapon &_weapon;
		
	public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void attack();
};
