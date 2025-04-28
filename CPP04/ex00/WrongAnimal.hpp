/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:45:03 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/28 18:03:22 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal
{
	protected:

		std::string type;

	public:

		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& wrongAnimal);

		WrongAnimal& operator=(const WrongAnimal& wrongAnimal);
	
		virtual ~WrongAnimal();

		std::string getType()const;
		void makeSound()const;

};
