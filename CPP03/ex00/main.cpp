/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 22:08:47 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/30 10:53:55 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap person1("person1");
	ClapTrap person2("person2");
	std::cout << std::endl;

	person1.attack("person2");
	std::cout << std::endl;

	person2.takeDamage(1);
	std::cout << std::endl;

	person2.beRepaired(1);
	std::cout << std::endl;

	person1.takeDamage(11);
	std::cout << std::endl;

	person1.takeDamage(11);
	std::cout << std::endl;

	person1.attack("person2");
	std::cout << std::endl;

	person1.beRepaired(10);
	std::cout << std::endl;

	for (int i = 0; i != 10; i++)
		person2.attack("person1");
	
	person2.beRepaired(2);

	std::cout << std::endl;

}
