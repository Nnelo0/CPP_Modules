/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:56:09 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/22 14:51:00 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#pragma once

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:

		std::string _name;

	public:

		DiamondTrap();
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap(std::string name);

		DiamondTrap& operator=(const DiamondTrap& other);

		virtual ~DiamondTrap();

		void attack(const std::string& target);
		void whoAmI();

};
