/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:35:40 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/30 19:30:00 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class AMateria
{
	protected:

		std::string _type;

	public:

		AMateria();
		AMateria(const AMateria &Amateria);
		AMateria(std::string const & type);

		virtual ~AMateria();

		AMateria& operator=(const AMateria& Amateria);

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};