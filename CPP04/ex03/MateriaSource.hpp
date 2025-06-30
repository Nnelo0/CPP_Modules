/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:49:15 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/30 20:15:09 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:

		AMateria* _materias[4];

	public:

		MateriaSource();
		MateriaSource(const MateriaSource& materiaSource);

		MateriaSource& operator=(const MateriaSource& materiaSource);

		~MateriaSource();

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};
