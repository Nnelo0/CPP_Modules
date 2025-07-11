/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:47:42 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/30 19:30:09 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

#pragma once

class Ice: public AMateria
{
	public:

		Ice();

		Ice(const Ice& ice);

		Ice& operator=(const Ice& ice);

		~Ice();

		void use(ICharacter& target);
		AMateria* clone() const;

};
