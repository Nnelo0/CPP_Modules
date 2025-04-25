/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:02:17 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/25 23:28:13 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:

		Dog();
		Dog(const Dog& dog);
		
		Dog& operator=(const Dog& dog);

		~Dog();
		
		void makeSound()const;

};
