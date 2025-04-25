/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:22:39 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/20 21:53:48 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	int level = -1;

	if (argc != 2)
	{
		std::cout << RED << "The program must have 1 arguments : " << GREEN << "DEBUG" << RED << " or " << GREEN << "INFO" << RED << " or " << GREEN << "WARNING" << RED << " or " << GREEN << "ERROR" << RESET << std::endl;
		return 2;
	}

	std::string input (argv[1]);
	std::string messages[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i != 4; i++)
	{
		if (input == messages[i])
			level = i;
	}
	
	switch (level)
	{
		case 0:
			std::cout << MAGENTA << "\n[DEBUG]\n" << RESET << std::endl;
			harl.complain("DEBUG");
		case 1:
			std::cout << MAGENTA << "\n[INFO]\n" << RESET << std::endl;
			harl.complain("INFO");
		case 2:
			std::cout << MAGENTA << "\n[WARNING]\n" << RESET << std::endl;
			harl.complain("WARNING");
		case 3:
			std::cout << MAGENTA << "\n[ERROR]\n" << RESET << std::endl;
			harl.complain("ERROR");
			break;
		default:
			std::cout << GREEN << "[" << input << "]" << RED << " is not a valid expression" << RESET <<std::endl;
			break;
	}

	return 0;	
}