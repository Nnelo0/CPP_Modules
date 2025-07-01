/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 19:33:33 by ebroudic          #+#    #+#             */
/*   Updated: 2025/07/01 22:22:44 by ebroudic         ###   ########.fr       */
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
		if (materiaSource._materias[i]) {
			_materias[i] = materiaSource._materias[i]->clone();}
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
	if (!materia) {
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
	return (0);
}

std::string MateriaSource::getMaterias(void) const	
{
	std::string _materiasList;

	for (int i = 0; i < 4; ++i)
	{
		if (_materias[i])
			_materiasList += _materias[i]->getType() + " ";
		else
			_materiasList += "empty";
		_materiasList += "\n";
	}

	return _materiasList;
}