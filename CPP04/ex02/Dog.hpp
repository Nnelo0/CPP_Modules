/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:02:17 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/29 19:48:03 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:

		Brain* _brain;

	public:

		Dog();
		Dog(const Dog& dog);

		Dog& operator=(const Dog& dog);

		~Dog();

		void makeSound()const;

		void setIdea(unsigned int index, const std::string& idea);
		void getIdeas(void) const;
};
