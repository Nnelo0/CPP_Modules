/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:47:48 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/30 21:24:57 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure& cure) : AMateria(cure)
{
}

Cure& Cure::operator=(const Cure& cure)
{
	if (this != &cure)
	{
		AMateria::operator=(cure);
	}
	return *this;
}

Cure::~Cure()
{
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;

	AMateria::use(target);
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}