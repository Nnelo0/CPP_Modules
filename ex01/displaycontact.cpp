/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displaycontact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:58:20 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/07 14:39:46 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	return;
}

std::string formatField(const std::string& str) 
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    std::stringstream ss;
    ss << std::setw(10) << str;
    return ss.str();
}

std::string formatField(int i)
{
    std::stringstream ss;
    ss << i;
    return formatField(ss.str());
}

void Contact::display_contact(int i)
{
	std::cout	<< "|" << formatField(i) 
				<< "|" << formatField(firstname)
				<< "|" << formatField(lastname)
				<< "|" << formatField(nickname)
				<< "|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void Contact::get_contact_infos()
{
	std::cout << "First Name : " << firstname << std::endl;
	std::cout << "Last Name : " << lastname << std::endl;
	std::cout << "Nickname : " << nickname << std::endl;
	std::cout << "Phone number : " << phonenumber << std::endl;
	std::cout << "Darkest Secret : " << darkestsecret << std::endl;
}

void PhoneBook::display_contact()
{
	if (index == 0)
		return std::cout << "There is no one in the phonebook, use ADD" << std::endl, (void)0;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	
	for (int i = 0; i < index; i++)
	{
		Phonebook[i].display_contact(i + 1);
	}
	
	std::string input;
	while (1)
	{
		std::cout << "Choose a index between 1 and 8" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << RED << "Bye" << YELLOW << " :)" << RESET << std::endl;
			exit(0);
		}
		if (input.length() != 1)
			std::cout << input << " is not a index between 1 and 8 !" << std::endl;
		else if (input[0] >= '1' && input[0] <= '8')
		{
			if (index > input[0] - '0' - 1)
			{
				Phonebook[input[0] - '0' - 1].get_contact_infos();
				break ;
			}
			else
				std::cout << "contact with index : " << input << " doesn't exist" << std::endl;
		}
	}
}