/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:02:16 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/26 00:13:17 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << "[Dog] Default Constructor called" << std::endl;
}

Dog::Dog(const Dog& dog): Animal (dog)
{
	std::cout << "[Dog] Copy Constructor called" << std::endl;
}
	
Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "[Dog] Copy assignment operator called" << std::endl;
	this->type = dog.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor called" << std::endl;
}

void Dog::makeSound()const
{
	std::cout << "Dog with type : " << getType() << " says : WWOOOOOOOOOFFFFFFFF !!" << std::endl;
}