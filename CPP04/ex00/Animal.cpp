/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 22:51:45 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/28 18:18:47 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("unknown")
{
	std::cout << "[Animal] Default Constructor called" << std::endl;
}

Animal::Animal(std::string type):type(type)
{
	std::cout << "[Animal] type Constructor called" << std::endl;
}

Animal::Animal(const Animal& animal)
{
	std::cout << "[Animal] Copy Constructor called" << std::endl;
	this->type = animal.type;
}

Animal& Animal::operator=(const Animal& animal)
{
	std::cout << "[Animal] Copy assignment operator called" << std::endl;
	this->type = animal.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor called" << std::endl;
}

std::string Animal::getType()const
{
	return type;
}

void Animal::makeSound()const
{
	std::cout << "animal with type : " << type << " made a sound !" << std::endl; 
}
