/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:51:31 by ebroudic          #+#    #+#             */
/*   Updated: 2025/07/01 21:32:37 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Character: public ICharacter
{
	private:

		std::string _name;
		AMateria* _inventory[4];

	public:

		Character();
		Character(const std::string& name);

		Character(const Character& character);

		Character& operator=(const Character& character);

		~Character();

		std::string const &getName(void) const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);

		std::string getInventory(void) const;

};
