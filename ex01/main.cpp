/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:35:42 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/07 15:11:45 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::string input;
	PhoneBook phoneBook;

	while (1)
	{
		std::cout << "Type ADD or SEARCH or EXIT" << std::endl;
		std::getline(std::cin ,input);
		if (std::cin.eof())
			break;
		if (!input.compare("EXIT"))
			break;
		else if (!input.compare("ADD"))
			phoneBook.add_contact_phonebook();
		else if (!input.compare("SEARCH"))
			phoneBook.display_contact();
	}
	std::cout << GREEN << "Bye" << " :)" << RESET << std::endl;
	return 0;
}
