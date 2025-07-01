/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:44:25 by ebroudic          #+#    #+#             */
/*   Updated: 2025/07/01 10:57:56 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:

		bool _gateKeeperMode;

	public:

		static const unsigned int	_DefaultEnergyPoints = 50;

		ScavTrap();
		ScavTrap(const ScavTrap& other);
		ScavTrap(std::string name);

		ScavTrap& operator=(const ScavTrap& other);

		~ScavTrap();

		void guardGate();
		void attack(const std::string& target);
};
