/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:51:35 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/30 22:11:28 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default")
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
}

Character::Character(const std::string& name) : _name(name)
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
}

Character::Character(const Character& character) : ICharacter(character), _name(character._name)
{
	for (int i = 0; i < 4; ++i)
	{
		if (character._inventory[i])
			_inventory[i] = character._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

Character& Character::operator=(const Character& character)
{
	if (this != &character)
	{
		this->_name = character._name;
		for (int i = 0; i < 4; ++i)
		{
			delete _inventory[i];
			if (character._inventory[i])
				this->_inventory[i] = character._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		delete _inventory[i];
	}
}

std::string const &Character::getName(void) const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	if (!m) {
		std::cout << RED << "Cannot equip a null materia." << RESET << std::endl;
		return;
	}
	
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i] == m) {
			std::cout << RED << "Cannot equip: " << GREEN << m->getType() << RED << " this materia is already equipped"  << RESET << std::endl;
			return;
		}
		if (!_inventory[i]) {
			_inventory[i] = m;
			return;
		}
	}
	
	std::cout << RED << "Inventory is full, cannot equip: " << GREEN << m->getType() << RESET << std::endl;
}

void Character::unequip(int idx)
{
	if (!_inventory[idx])
	{
		std::cout << RED << "No materia to unequip at index: " << MAGENTA << idx << RESET << std::endl;
		return;
	}
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
	{
		std::cout << RED  << "Cannot use materia at index: " << MAGENTA << idx << RESET << std::endl;
		return;
	}
	_inventory[idx]->use(target);
}
