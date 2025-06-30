/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 19:33:33 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/30 21:26:32 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& materiaSource): IMateriaSource(materiaSource)
{
	for (int i = 0; i < 4; ++i)
	{
		if (materiaSource._materias[i])
			_materias[i] = materiaSource._materias[i]->clone();
		else
			_materias[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& materiaSource)
{
	if (this != &materiaSource)
	{
		for (int i = 0; i < 4; ++i)
		{
			delete _materias[i];
			if (materiaSource._materias[i])
				_materias[i] = materiaSource._materias[i]->clone();
			else
				_materias[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		delete _materias[i];
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (!materia)
	{
		std::cout << RED << "MateriaSource cannot learn a null materia." << RESET << std::endl;		
		return;
	}

	for (int i = 0; i < 4; ++i)
	{
		if (!_materias[i])
		{
			_materias[i] = materia;
			return;
		}
	}
	if (materia)
		std::cout << RED << "MateriaSource already knows 4 materias, cannot learn more." << RESET << std::endl;
	delete materia;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] && _materias[i]->getType() == type)
		{
			return _materias[i]->clone();
		}
	}
	std::cout << RED << "Cannot create materia, type: " << GREEN << type << RED <<" is invalid!" << RESET << std::endl;
	return (0);
}