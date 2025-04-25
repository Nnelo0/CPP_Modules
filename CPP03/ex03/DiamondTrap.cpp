/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:56:07 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/24 13:59:10 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("unknown_clap_name")
{
	this->_name = "unknown";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << PINK << "DiamondTrap default constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << PINK << "DiamondTrap name constructor called for " << CYAN << _name << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondTrap): ClapTrap(diamondTrap), FragTrap(diamondTrap), ScavTrap(diamondTrap)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = diamondTrap;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "DiamondTrap destructor called" << RESET << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
	std::cout << "DiamondTrap Assignation operator called" << std::endl;

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
	if (this->_hitPoints == 0)
	{
		std::cout << "DiamondTrap is dead !" << RESET << std::endl;
	}
	else
	{
		std::cout << "DiamondTrap name is " << _name  << " and is ClapTrap name is " << ClapTrap::_name << std::endl;
	}
}