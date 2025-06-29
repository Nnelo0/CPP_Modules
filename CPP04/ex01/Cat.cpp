/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:02:12 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/29 21:23:06 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << "[Cat] Default Constructor called" << std::endl;
	this->_brain = new Brain();
}
Cat::Cat(const Cat& cat): Animal (cat)
{
	std::cout << "[Cat] Copy Constructor called" << std::endl;
	this->_brain = new Brain(*cat._brain);
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "[Cat] Copy assignment operator called" << std::endl;
	*this->_brain = *cat._brain;
	this->type = cat.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor called" << std::endl;
	delete this->_brain;
}

void Cat::makeSound()const
{
	std::cout << "MMEEOOWW !!" << std::endl;
}

void Cat::setIdea(unsigned int index, const std::string& idea)
{
	if (this->_brain)
		this->_brain->setIdea(index, idea);
	else
		std::cout << "\033[1;31m Cat has no brain to set ideas.. \033[1;0m" << std::endl;
}

void Cat::getIdeas(void) const
{
	if (this->_brain) {
		std::cout << "\033[1;34mCat's ideas:\033[1;0m" << std::endl;
		for (unsigned int i = 0; i < 100; ++i)
		{
			std::string idea = this->_brain->getIdea(i);
			if (!idea.empty())
				std::cout << "Idea " << i << ": " << idea << std::endl;
		}
	}
	else
		std::cout << "\033[1;31m Cat has no brain to get ideas.. \033[1;0m" << std::endl;
}
