/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:58:20 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/08 09:07:15 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	return;
}

void PhoneBook::add_contact_phonebook()
{
	if (index < 8)
	{
		Phonebook[index].add_contact();
		index++;
	}
	else if (index >= 8)
	{
		for(int i = 1; i < 8; i++)
			Phonebook[i -1] = Phonebook[i];
		Phonebook[7].add_contact();
	}
}

void PhoneBook::display_contact()
{
	if (index == 0)
		return std::cout << RED << "There is no one in the phonebook, use ADD !" << RESET << std::endl, (void)0;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	
	for (int i = 0; i < index; i++)
	{
		Phonebook[i].display_contact(i + 1);
	}
	
	std::string input;
	while (1)
	{
		std::cout << "Choose an index between 1 and 8" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << GREEN << "Bye" << " :)" << RESET << std::endl;
			exit(0);
		}
		if (input.length() == 0)
			std::cout << RED << "Please enter something!" << RESET << std::endl;
		else if (input.length() != 1 || (input.length() == 1 && !(input[0] >= '1' && input[0] <= '8')))
			std::cout << GREEN  << "{" << input << "}" << RED " Is not an index between 1 and 8 !" << RESET << std::endl;
		else if (input[0] >= '1' && input[0] <= '8')
		{
			if (index > input[0] - '0' - 1)
			{
				Phonebook[input[0] - '0' - 1].get_contact_infos();
				break ;
			}
			else
				std::cout << RED << "contact with index : " << GREEN  << "{" << input << "}" << RED <<  " doesn't exist" << RESET << std::endl;
		}
	}
}