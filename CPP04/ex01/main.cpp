/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:15:42 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/29 21:17:53 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const int size = 20;
	Animal* animals[size];

	for (int i = 0; i < size / 2; ++i)
		animals[i] = new Dog();

	for (int i = size / 2; i < size; ++i)
		animals[i] = new Cat();

	std::cout << "\n\033[1;35m--- Sound test ---\033[1;0m" << std::endl;

	for (int i = 0; i < size; ++i)
		animals[i]->makeSound();

	std::cout << "\n\033[1;35m--- Set idea ---\033[1;0m" << std::endl;

	Dog* dog = NULL;
	Cat* cat = NULL;

	std::string type1 = animals[0]->getType();

	if (type1 == "Dog") {
		dog = dynamic_cast<Dog*>(animals[0]);
		dog->setIdea(0, "I want to play!");
		dog->setIdea(1, "I love my owner!");
		dog->getIdeas();
	}
	else if (type1 == "Cat") {
		cat = dynamic_cast<Cat*>(animals[0]);
		cat->setIdea(0, "I want to sleep!");
		cat->setIdea(1, "I want to destroy this sofa!");
		cat->getIdeas();
	}

	const int index1 = size / 2;
	std::string type2 = animals[index1]->getType();

	if (type2 == "Dog") {
		dog = dynamic_cast<Dog*>(animals[index1]);
		dog->setIdea(0, "I want to play!");
		dog->setIdea(1, "I love my owner!");
		dog->getIdeas();
	}
	else if (type2 == "Cat") {
		cat = dynamic_cast<Cat*>(animals[index1]);
		cat->setIdea(0, "I want to sleep!");
		cat->setIdea(2, "I want to destroy this sofa!");
		cat->getIdeas();
	}

	std::cout << "\n\033[1;35m--- Deep copie test with copy constructor ---\033[1;0m" << std::endl;
	
	if (dog) {
		Dog tmpDog(*dog);
		std::cout << std::endl;

		tmpDog.setIdea(3, "i want to go out in the forest!");

		std::cout << "\033[1;33mCopied Dog ideas:\033[1;0m" << std::endl;
		tmpDog.getIdeas();

		std::cout << "\033[1;33mOriginal Dog ideas:\033[1;0m" << std::endl;
		dog->getIdeas();
		std::cout << std::endl;
	}

	std::cout << std::endl;

	if (cat) {
		Cat tmpCat(*cat);
		std::cout << std::endl;

		tmpCat.setIdea(3, "I want to chase a mouse!");

		std::cout << "\033[1;33mCopied Cat ideas:\033[1;0m" << std::endl;
		tmpCat.getIdeas();

		std::cout << "\033[1;33mOriginal Cat ideas:\033[1;0m" << std::endl;
		cat->getIdeas();
		std::cout << std::endl;
	}

	std::cout << "\n\033[1;35m--- Deep copie test with assigment operator (=) ---\033[1;0m" << std::endl;
	
	if (dog) {
		Dog tmpDog;
		std::cout << std::endl;

		tmpDog = *dog;

		std::cout << std::endl;

		tmpDog.setIdea(3, "i want to go out in the forest!");

		std::cout << "\033[1;33mCopied Dog ideas:\033[1;0m" << std::endl;
		tmpDog.getIdeas();

		std::cout << "\033[1;33mOriginal Dog ideas:\033[1;0m" << std::endl;
		dog->getIdeas();
		std::cout << std::endl;
	}

	std::cout << std::endl;

	if (cat) {
		Cat tmpCat;
		std::cout << std::endl;

		tmpCat = *cat;

		std::cout << std::endl;

		tmpCat.setIdea(3, "I want to chase a mouse!");

		std::cout << "\033[1;33mCopied Cat ideas:\033[1;0m" << std::endl;
		tmpCat.getIdeas();

		std::cout << "\033[1;33mOriginal Cat ideas:\033[1;0m" << std::endl;
		cat->getIdeas();
		std::cout << std::endl;
	}

	std::cout << "\n\033[1;35m--- destruction of all animals ---\033[1;0m" << std::endl;

	for (int i = 0; i < size; ++i)
		delete animals[i];

	return 0;
}
