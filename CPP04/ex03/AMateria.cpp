/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:39:19 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/30 16:42:40 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	
}

AMateria::AMateria(const AMateria &Amateria)
{
	
}

AMateria::AMateria(std::string const & type)
{
	
}

AMateria::~AMateria()
{
	
}

AMateria& AMateria::operator=(const AMateria& Amateria)
{
	
}

std::string const & AMateria::getType() const
{
	return _type;
}

AMateria* AMateria::clone() const
{
	
}

void AMateria::use(ICharacter& target)
{
	
}