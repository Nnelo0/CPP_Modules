/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:02:16 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/29 21:23:31 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << "[Dog] Default Constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog& dog): Animal (dog)
{
	std::cout << "[Dog] Copy Constructor called" << std::endl;
	this->_brain = new Brain(*dog._brain);
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "[Dog] Copy assignment operator called" << std::endl;
	*this->_brain = *dog._brain;
	this->type = dog.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor called" << std::endl;
	delete this->_brain;
}

void Dog::makeSound()const
{
	std::cout << "WWOOOOOFFF ! WWOOOOFFFFF !!" << std::endl;
}

void Dog::setIdea(unsigned int index, const std::string& idea)
{
	if (this->_brain)
		this->_brain->setIdea(index, idea);
	else
		std::cout << "\033[1;31m Dog has no brain to set ideas.. \033[1;0m" << std::endl;
}

void Dog::getIdeas(void) const
{
	if (this->_brain) {
		std::cout << "\033[1;34mDog's ideas:\033[1;0m" << std::endl;
		for (unsigned int i = 0; i < 100; ++i)
		{
			std::string idea = this->_brain->getIdea(i);
			if (!idea.empty())
				std::cout << "Idea " << i << ": " << idea << std::endl;
		}
	}
	else
		std::cout << "\033[1;31m Dog has no brain to get ideas.. \033[1;0m" << std::endl;
}
