/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:36:08 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/23 09:12:23 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

# define GREEN   "\033[1;32m"
# define CYAN    "\033[1;36m"
# define MAGENTA "\033[1;35m"
# define RESET   "\033[0m"

class Weapon
{
	private:
		std::string _type;
	public:
	
	Weapon();
	Weapon(std::string type);
	~Weapon();


	const std::string getType();
	void setType(std::string newvalue);
};
