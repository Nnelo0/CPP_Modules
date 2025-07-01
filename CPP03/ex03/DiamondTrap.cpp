/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:56:07 by ebroudic          #+#    #+#             */
/*   Updated: 2025/07/01 13:39:27 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("unknown_clap_name"), FragTrap("unknown_clap_name"), ScavTrap("unknown_clap_name")
{
	this->_name = "unknown";
	this->_hitPoints = FragTrap::_DefaultHitPoints;
	this->_energyPoints = ScavTrap::_DefaultEnergyPoints;
	this->_attackDamage = FragTrap::_DefaultAttackDamage;
	std::cout << PINK << "DiamondTrap default constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name+ "_clap_name"), ScavTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hitPoints = FragTrap::_DefaultHitPoints;
	this->_energyPoints = ScavTrap::_DefaultEnergyPoints;
	this->_attackDamage = FragTrap::_DefaultAttackDamage;
	std::cout << PINK << "DiamondTrap name constructor called for " << CYAN << _name <<  RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondTrap): ClapTrap(diamondTrap), FragTrap(diamondTrap), ScavTrap(diamondTrap)
{
	std::cout << PINK << "DiamondTrap copy constructor called" << std::endl;
	*this = diamondTrap;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << PINK << "DiamondTrap " << RED << "destructor called" << RESET << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
	std::cout << PINK << "DiamondTrap Assignation operator called" << std::endl;

	this->_name = diamondTrap._name;
	this->_hitPoints = diamondTrap._hitPoints;
	this->_energyPoints = diamondTrap._energyPoints;
	this->_attackDamage = diamondTrap._attackDamage;

	return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	if (this->_hitPoints == 0) {
		std::cout << RED << "DiamondTrap is dead !" << RESET << std::endl;
	}
	else {
		std::cout << PINK << "DiamondTrap" << GREEN <<" name is " << CYAN << this->_name << GREEN << " and is ClapTrap name is " << CYAN << ClapTrap::_name << RESET << std::endl;
	}
}