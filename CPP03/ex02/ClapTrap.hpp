/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 22:08:45 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/30 12:23:55 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

# define GREEN		"\033[1;32m"
# define CYAN		"\033[1;36m"
# define BLUE    	"\033[34m"
# define MAGENTA	"\033[1;35m"
# define YELLOW 	"\033[1;33m"
# define RED 		"\033[1;31m"
# define RESET		"\033[0m"

class ClapTrap
{
	protected:
		
		std::string _name;

		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
		

	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);

		ClapTrap& operator=(const ClapTrap& other);
	
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
