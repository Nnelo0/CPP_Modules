/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 22:08:51 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/30 10:55:24 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("unknown"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GREEN << "ClapTrap default constructor called" << RESET <<std::endl;
}

ClapTrap::ClapTrap(std::string name):_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout  << GREEN << "ClapTrap name constructor called for "<< CYAN << _name << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = clapTrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
	
	return (*this);
}
	
ClapTrap::~ClapTrap()
{
	std::cout << RED << "ClapTrap destructor called" << RESET << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << CYAN << this->_name << RED << " doesn't have enough energy to attacks !" << RESET << std::endl;
	else if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << CYAN << this->_name << RED << " is dead obviously he can't attacks !" << RESET << std::endl;
	else
	{
		std::cout << "ClapTrap " << CYAN << this->_name << RESET << " attacks " << CYAN << target << RESET << ", causing " << MAGENTA << _attackDamage << RESET << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << CYAN << this->_name << RED << " is dead ! Don't hit a dead person !" << RESET<< std::endl;
	else 
	{
		amount > this->_hitPoints ? this->_hitPoints = 0 : this->_hitPoints -= amount;

		std::cout << "ClapTrap "<< CYAN << this->_name << RESET << " took " << MAGENTA << amount << RESET << " damages, he has " << MAGENTA
		<< this->_hitPoints << RESET << " hits points left!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << CYAN << this->_name << RED << " doesn't have enough energy to repair itself !" << RESET << std::endl;
	else if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << CYAN << this->_name << RED << " is dead obviously he can't repair itself !" << RESET << std::endl;
	else
	{
		std::cout << "ClapTrap " << CYAN << this->_name << RESET << " repairs itself of " << MAGENTA << amount << RESET << " hits points!" << std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
	}
}
