/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:36:45 by ebroudic          #+#    #+#             */
/*   Updated: 2025/07/01 10:57:12 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	private:

	public:

		static const unsigned int	_DefaultHitPoints = 100;
		static const unsigned int	_DefaultAttackDamage = 30;

		FragTrap();
		FragTrap(const FragTrap& other);
		FragTrap(std::string name);
	
		FragTrap& operator=(const FragTrap& other);
		
		~FragTrap();

		void highFivesGuys(void);
};
