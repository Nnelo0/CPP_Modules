/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 22:08:47 by ebroudic          #+#    #+#             */
/*   Updated: 2025/07/01 09:22:30 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main()
{
	ClapTrap person1("person1");
	ClapTrap person2("person2");
	std::cout << std::endl;
	
	ScavTrap person3("person3");
	std::cout << std::endl;
	
	FragTrap person4("person4");
	std::cout << std::endl;

	person1.attack("person2");
	std::cout << std::endl;

	person2.takeDamage(1);
	std::cout << std::endl;

	person2.beRepaired(1);
	std::cout << std::endl;

	person3.attack("person1");
	std::cout << std::endl;

	person3.guardGate();
	std::cout << std::endl;

	person4.attack("person3");
	std::cout << std::endl;

	person4.takeDamage(10);
	std::cout << std::endl;

	person4.beRepaired(7);
	std::cout << std::endl;

	person4.highFivesGuys();
	std::cout << std::endl;

	for (int i = 0; i != 100; i++)
		person4.attack("person3");

	std::cout << std::endl;

	person4.beRepaired(7);
	std::cout << std::endl;

	ClapTrap *test = new FragTrap();
	test->attack("test");
	std::cout << std::endl;

	delete test;

}