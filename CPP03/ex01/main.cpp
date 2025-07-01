/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 22:08:47 by ebroudic          #+#    #+#             */
/*   Updated: 2025/07/01 09:12:28 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
	ClapTrap person1("person1");
	ClapTrap person2("person2");
	ScavTrap person3("person3");
	std::cout << std::endl;

	person1.attack("person2");
	std::cout << std::endl;

	person2.takeDamage(1);
	std::cout << std::endl;

	person2.beRepaired(1);
	std::cout << std::endl;

	person3.attack("person1");
	std::cout << std::endl;

	person3.takeDamage(10);
	std::cout << std::endl;

	person3.beRepaired(5);
	std::cout << std::endl;

	person3.guardGate();
	std::cout << std::endl;

	person3.guardGate();
	std::cout << std::endl;

	for (int i = 0; i != 50; i++)
		person3.attack("person2");

	person3.takeDamage(10);
	std::cout << std::endl;

	person3.beRepaired(5);
	std::cout << std::endl;

	ClapTrap *test = new ScavTrap();
	test->attack("test");
	delete test;
}
