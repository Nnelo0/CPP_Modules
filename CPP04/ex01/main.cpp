/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:15:42 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/26 00:17:15 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "-----------GOOD-TEST-----------" << std::endl;
	std::cout << std::endl;
	
	{
		const Animal* meta = new Animal();
		std::cout << std::endl;
		
		const Animal* j = new Dog();
		std::cout << std::endl;
		
		const Animal* i = new Cat();
		std::cout << std::endl;

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		
		std::cout << std::endl;
		
		i->makeSound();
		j->makeSound();
		meta->makeSound();

		std::cout << std::endl;

		delete meta;
		std::cout << std::endl;
		
		delete j;
		std::cout << std::endl;
		
		delete i;
		std::cout << std::endl;
	}

		std::cout << std::endl;
		std::cout << "-----------WRONG-TEST-----------" << std::endl;
		std::cout << std::endl;

	{
		const WrongAnimal* wrongAnimal = new WrongAnimal();
		std::cout << std::endl;
	
		const WrongAnimal* wrongCat = new WrongCat();
		std::cout << std::endl;
	
		std::cout << wrongAnimal->getType() << " " << std::endl;
		std::cout << wrongCat->getType() << " " << std::endl;
		std::cout << std::endl;
	
		wrongAnimal->makeSound();
		wrongCat->makeSound();
		std::cout << std::endl;

		delete wrongAnimal;
		std::cout << std::endl;
		
		delete wrongCat;
		std::cout << std::endl;
	}

	return 0;
}