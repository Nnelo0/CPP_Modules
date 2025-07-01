/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:47:40 by ebroudic          #+#    #+#             */
/*   Updated: 2025/07/01 22:22:12 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	
}

ICharacter::ICharacter(const ICharacter &Icharacter)
{
	(void)Icharacter;
}

ICharacter &ICharacter::operator=(const ICharacter &Icharacter)
{
	(void)Icharacter;
	return *this;
}