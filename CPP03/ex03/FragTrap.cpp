/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:36:30 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/24 11:17:26 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << MAGENTA << "FragTrap default constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << MAGENTA << "FragTrap name constructor called for " << CYAN << _name << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragTrap): ClapTrap(fragTrap)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = fragTrap;
}

FragTrap::~FragTrap()
{
	std::cout << RED << "FragTrap destructor called" << RESET << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;

	this->_name = fragTrap._name;
	this->_hitPoints = fragTrap._hitPoints;
	this->_energyPoints = fragTrap._energyPoints;
	this->_attackDamage = fragTrap._attackDamage;

	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " High Five with me guys !!" << std::endl;
}