/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:45:01 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/28 18:20:03 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("Wrong_unknown")
{
	std::cout << "[WrongAnimal] Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):type(type)
{
	std::cout << "[WrongAnimal] type Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal)
{
	std::cout << "[WrongAnimal] Copy Constructor called" << std::endl;
	this->type = wrongAnimal.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrongAnimal)
{
	std::cout << "[WrongAnimal] Copy assignment operator called" << std::endl;
	this->type = wrongAnimal.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Destructor called" << std::endl;
}

std::string WrongAnimal::getType()const
{
	return type;
}

void WrongAnimal::makeSound()const
{
	std::cout << "WrongAnimal with type : " << type << " made a wrong sound !" << std::endl; 
}