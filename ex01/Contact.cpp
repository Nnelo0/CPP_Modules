/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:59:03 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/08 09:07:52 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::formatField(const std::string& str) 
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    std::stringstream ss;
    ss << std::setw(10) << str;
    return ss.str();
}

std::string Contact::formatField(int i)
{
    std::stringstream ss;
    ss << i;
    return formatField(ss.str());
}

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
