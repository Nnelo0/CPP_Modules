/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:51:35 by ebroudic          #+#    #+#             */
/*   Updated: 2025/07/02 10:07:03 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("unknown")
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
	for (int i = 0; i < 4; ++i) {
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
		return;
	}

	bool isFull = true;

    for (int i = 0; i < 4; ++i)
    {
        if (!_inventory[i]) {
            isFull = false;
            break;
        }
    }

	if (isFull)
		return;

	for (int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i] == m && i >= 0 && i < 4) {
			this->_inventory[i + 1] = m->clone();
			return;
		}
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			return;
		}
	}

}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !this->_inventory[idx]) {
		return;
	}

	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || !this->_inventory[idx]) {
		return;
	}
	this->_inventory[idx]->use(target);
}


std::string Character::getInventory(void) const
{
	std::string inventory;

	for (int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i])
			inventory += this->_inventory[i]->getType() + " ";
		else
			inventory += "empty";
		inventory += "\n";
	}
	return inventory;
}