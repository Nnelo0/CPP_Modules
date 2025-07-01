/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:36:45 by ebroudic          #+#    #+#             */
/*   Updated: 2025/07/01 09:07:15 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
	private:

	public:

		FragTrap();
		FragTrap(const FragTrap& other);
		FragTrap(std::string name);
	
		FragTrap& operator=(const FragTrap& other);
		
		~FragTrap();

		void highFivesGuys(void);
};
