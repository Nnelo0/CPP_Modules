/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addcontact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:59:03 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/07 15:12:05 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::add_contact()
{
	field_name[0] = "First Name";
	field_name[1] = "Last Name";
	field_name[2] = "Nickname";
	field_name[3] = "Phone Number";
	field_name[4] = "Darkest Secret";

	std::string input;

	for (int i = 0; i < 5; i++)
	{
		while (1)
		{
			std::cout << "Enter the " << field_name[i] << std::endl;
			std::getline(std::cin, input);
			if (std::cin.eof())
			{
				std::cout << GREEN << "Bye" << " :)" << RESET << std::endl;
				exit(0);
			}
			if (input.length() > 0)
				break;
			else
				std::cout << RED << "Please enter something!" << RESET << std::endl;
		}
		if (i == 0)
			firstname = input;
		else if (i == 1)
			lastname = input;
		else if (i == 2)
			nickname = input;
		else if (i == 3)
			phonenumber = input;
		else if (i == 4)
			darkestsecret = input;
	}
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