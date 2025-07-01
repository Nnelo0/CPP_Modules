/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:15:42 by ebroudic          #+#    #+#             */
/*   Updated: 2025/07/01 22:42:04 by ebroudic         ###   ########.fr       */
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

	std::cout << BLUE << "|-------- SUBJECT TEST --------|\n" << RESET << std::endl;
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

	std::cout << BLUE << "\n|--------- MY TEST ---------|" << RESET << std::endl;

	{

		std::cout << MAGENTA << "\n|-------- Learning and creating materias --------|\n" << RESET << std::endl;
 
		MateriaSource* src = new MateriaSource();
		std::cout << YELLOW << "start of src: \n" << RESET << src->getMaterias() << RESET <<std::endl;

		src->learnMateria(new Ice());

		std::cout << YELLOW << "src after learn one Materia: \n" << RESET << src->getMaterias() << RESET <<std::endl;

		AMateria* Nullmateria = NULL;
		src->learnMateria(Nullmateria);
		std::cout << YELLOW << "src after learn a Null Materia: \n" << RESET << src->getMaterias() << RESET <<std::endl;


		MateriaSource* srcCopie = new MateriaSource(*src);

		std::cout << GREEN << "Copie of src: \n" << RESET << srcCopie->getMaterias() << RESET << std::endl;

		srcCopie->learnMateria(new Ice());
		std::cout << GREEN << "Copie of src after learn Ice: \n" << RESET << srcCopie->getMaterias() << RESET << std::endl;

		std::cout << YELLOW << "src after Copie of src learned Ice: \n" << RESET << src->getMaterias() << RESET << std::endl;

		delete srcCopie;

		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		std::cout << YELLOW << "src after learn a 4 Materia: \n" << RESET << src->getMaterias() << RESET <<std::endl;

		src->learnMateria(new Ice());

		std::cout << YELLOW << "src after learn a 5 Materia: \n" << RESET << src->getMaterias() << RED << "he can't know 4+ Materia\n" << RESET << std::endl;

		Character* me = new Character("me");

		std::cout << PINK << "Inventory of " << me->getName() << ":\n" << RESET << me->getInventory() << std::endl;

		std::cout << RED << "Trying to create and equip an unknown and rock Materia\n" << RESET << std::endl;

		AMateria* tmp;
		tmp = src->createMateria("unknown"); 
		if (tmp)
			me->equip(tmp);
		tmp = src->createMateria("rock"); 
		if (tmp)
			me->equip(tmp);
		
		std::cout << PINK << "Inventory of " << me->getName() << " after equip unknown and rock Materia:\n" << RESET << me->getInventory() << std::endl;

		AMateria *Item1 = src->createMateria("ice");

		AMateria *Item2 = src->createMateria("cure");

		std::cout << MAGENTA << "|-------- Equipping materias --------|\n" << RESET << std::endl;

		me->equip(Item1);
		std::cout << PINK << "Inventory of " << me->getName() << " after equip Ice Materia:\n" << RESET << me->getInventory() << std::endl;

		me->equip(Item2);
		me->equip(Item2);

		AMateria *Item3 = src->createMateria("ice");
		me->equip(Item3);

		AMateria *Item4 = src->createMateria("cure");
		me->equip(Item4);

		std::cout << PINK << "Inventory of " << me->getName() << " after equip 4 Materia:\n" << RESET << me->getInventory() << std::endl;

		AMateria *TooManyItem = src->createMateria("cure");
		if (TooManyItem)
			me->equip(TooManyItem);
		delete TooManyItem;

		std::cout << PINK << "Inventory of " << me->getName() << " after equip 5 Materia:\n" << RESET << me->getInventory() <<  RED << "same as MateriaSource he can't know 4+ Materia\n" << RESET << std::endl;

		ICharacter* bob = new Character("bob");

		std::cout << MAGENTA << "|-------- Using and Unequip materias --------|\n" << RESET << std::endl;

		me->use(0, *bob);

		me->use(1, *bob);

		me->use(7, *bob);
		std::cout << RED << "User materia at index: 7, nothing is happening because index: 7 doesn't exist\n" << RESET << std::endl;

		me->unequip(0);
		delete Item1;

		std::cout << PINK << "Inventory of " << me->getName() << " after unequip first Materia:\n" << RESET << me->getInventory() << std::endl;

		me->unequip(42);
		std::cout << RED << "unequip materia at index: 42, nothing is happening because index: 42 doesn't exist\n" << RESET << std::endl;

		std::cout << RED << "Trying to use Materia at index: 0 but he was unequip before, nothing happening...\n" << RESET << std::endl;
		me->use(0, *bob);

		delete bob;
		delete me;
		delete src;
	}

	return 0;
}