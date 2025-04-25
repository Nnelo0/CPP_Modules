/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:44:25 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/22 13:05:22 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:

		bool _gateKeeperMode;

	public:

		ScavTrap();
		ScavTrap(const ScavTrap& other);
		ScavTrap(std::string name);

		ScavTrap& operator=(const ScavTrap& other);

		virtual ~ScavTrap();

		void guardGate();
		void attack(const std::string& target);
};
