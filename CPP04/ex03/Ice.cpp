/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:47:44 by ebroudic          #+#    #+#             */
/*   Updated: 2025/07/01 20:41:15 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice& ice) : AMateria(ice)
{
}

Ice& Ice::operator=(const Ice& ice)
{
	if (this != &ice)
	{
		AMateria::operator=(ice);
	}
	return *this;
}

Ice::~Ice()
{
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}