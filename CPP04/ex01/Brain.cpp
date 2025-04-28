/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:03:52 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/28 18:20:50 by ebroudic         ###   ########.fr       */
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