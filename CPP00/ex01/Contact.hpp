/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:15:16 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/08 10:32:22 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Contact 
{
	private:
		std::string field_name[5];

		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestsecret;
	
	public:

	void display_contact(int i);
	std::string formatField(const std::string& str);
	std::string formatField(int i);
	void add_contact();
	void get_contact_infos();
};