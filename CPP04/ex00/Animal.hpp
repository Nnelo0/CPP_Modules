/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 22:51:54 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/29 16:24:50 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
	protected:

		std::string type;

	public:

		Animal();
		Animal(std::string type);
		Animal(const Animal& animal);

		Animal& operator=(const Animal& animal);

		virtual ~Animal();

		std::string getType()const;
		virtual void makeSound()const;
};
