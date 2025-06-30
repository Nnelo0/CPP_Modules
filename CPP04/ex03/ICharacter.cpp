/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:47:40 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/30 21:25:21 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
}

ICharacter::ICharacter(const ICharacter &Icharacter)
{
	*this = Icharacter;
}

ICharacter &ICharacter::operator=(const ICharacter &Icharacter)
{
	if (this != &Icharacter)
	{
		*this = Icharacter;
	}
	return *this;
}