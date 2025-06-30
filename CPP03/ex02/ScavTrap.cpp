/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:44:18 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/30 12:21:04 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_gateKeeperMode = false;
	std::cout << YELLOW << "ScavTrap default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_gateKeeperMode = false;
	std::cout << YELLOW << "ScavTrap name constructor called for " << CYAN << _name << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap): ClapTrap(scavTrap)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = scavTrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "ScavTrap destructor called" << RESET << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;

	this->_name = scavTrap._name;
	this->_hitPoints = scavTrap._hitPoints;
	this->_energyPoints = scavTrap._energyPoints;
	this->_attackDamage = scavTrap._attackDamage;

	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0)
		std::cout << "ScavTrap " << CYAN << this->_name << RED << " doesn't have enough energy to attacks !" << RESET << std::endl;
	else if (this->_hitPoints == 0)
		std::cout << "ScavTrap "  << CYAN << this->_name << RED << " is dead obviously he can't attacks !" << RESET << std::endl;
	else
	{
		std::cout << "ScavTrap " << CYAN << this->_name << RESET << " attacks " << CYAN << target << RESET << ", causing " << MAGENTA << _attackDamage << RESET << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void ScavTrap::guardGate()
{
	if (this->_gateKeeperMode)
	{
		std::cout << "ScavTrap " << CYAN << this->_name << RED << " is already in GateKeeper mode " << RESET << std::endl;
	}
	else
	{
		this->_gateKeeperMode = true;
		std::cout << "ScavTrap "  << CYAN << this->_name << YELLOW << " is now in GateKeeper mode " << RESET << std::endl;
	}
}
