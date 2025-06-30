/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:15:42 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/30 22:28:44 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{

	std::cout << BLUE << "--------- SUBJECT TEST ---------\n" << RESET << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}

	std::cout << BLUE << "\n--------- MY TEST ---------\n" << RESET << std::endl;

	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		
		AMateria* Nullmateria = NULL;
		src->learnMateria(Nullmateria);

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		
		std::cout << std::endl;

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("unknown"); 
		if (tmp)
			me->equip(tmp);

		tmp = src->createMateria("rock"); 
		if (tmp)
			me->equip(tmp);

		tmp = src->createMateria("ice");
		me->equip(tmp);
		
		tmp = src->createMateria("cure");
		me->equip(tmp);
		me->equip(tmp);

		// me->unequip(3);

		// me->unequip(0);
		
		ICharacter* bob = new Character("bob");
		
		me->use(0, *bob);
		
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}

	return 0;
}