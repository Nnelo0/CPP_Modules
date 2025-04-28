/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:02:12 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/28 18:25:47 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << "[Cat] Default Constructor called" << std::endl;
	this->brain = new Brain();
}
Cat::Cat(const Cat& cat): Animal (cat)
{
	std::cout << "[Cat] Copy Constructor called" << std::endl;
	this->brain = new Brain();
}
	
Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "[Cat] Copy assignment operator called" << std::endl;
	*this->brain = *cat.brain;
	this->type = cat.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor called" << std::endl;
	delete this->brain;
}

void Cat::makeSound()const
{
	std::cout << "Cat with type : " << getType() << " says : MMEEOOWW !!" << std::endl;
}