/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:47:38 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/30 21:06:15 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

# define GREEN		"\033[1;32m"
# define CYAN		"\033[1;36m"
# define BLUE    	"\033[1;34m"
# define MAGENTA	"\033[1;35m"
# define YELLOW 	"\033[1;33m"
# define RED 		"\033[1;31m"
# define PINK		"\033[1;38;2;255;105;180m"
# define RESET		"\033[0m"

class AMateria;

class ICharacter
{
	public:
	
		ICharacter();
		ICharacter(const ICharacter& Icharacter);

		ICharacter &operator=(const ICharacter& Icharacter);

		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};