/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:02:12 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/29 19:48:38 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << "[Cat] Default Constructor called" << std::endl;
}

Cat::Cat(const Cat& cat): Animal (cat)
{
	std::cout << "[Cat] Copy Constructor called" << std::endl;
}
	
Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "[Cat] Copy assignment operator called" << std::endl;
	this->type = cat.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor called" << std::endl;
}

void Cat::makeSound()const
{
	std::cout << "MMEEOOWW !!" << std::endl;
}