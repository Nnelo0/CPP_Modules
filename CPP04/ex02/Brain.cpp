/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:03:52 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/29 21:22:12 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Default Constructor called" << std::endl;
}

Brain::Brain(const Brain& brain)
{
	std::cout << "[Brain] Copy Constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
}

Brain& Brain::operator=(const Brain& brain)
{
	std::cout << "[Brain] Copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor called" << std::endl;
}

void Brain::setIdea(unsigned int index, const std::string& idea)
{
	if (index < 100)
		this->ideas[index] = idea;
	else
		std::cout << "\033[1;31m Brain has only 100 ideas.. \033[1;0m" << std::endl;
}

std::string Brain::getIdea(unsigned int index) const
{
	if (index < 100)
		return this->ideas[index];
	else {
		std::cout << "\033[1;31m Brain has only 100 ideas.. \033[1;0m" << std::endl;
		return "";
	}
}
