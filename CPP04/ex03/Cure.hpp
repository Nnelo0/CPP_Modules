/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:47:46 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/30 16:55:53 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Cure: public AMateria
{
	public:

		Cure();
		Cure(const Cure& cure);

		Cure& operator=(const Cure& cure);

		~Cure();

		void use(ICharacter& target);
};