/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:39:19 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/30 21:27:02 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria():_type("undefined")
{
}

AMateria::AMateria(const AMateria &Amateria) : _type(Amateria._type)
{
}

AMateria::AMateria(std::string const & type):_type(type)
{
}

AMateria::~AMateria()
{
}

AMateria& AMateria::operator=(const AMateria& Amateria)
{
	if (this != &Amateria)
	{
		_type = Amateria._type;
	}
	return *this;
}

std::string const & AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}