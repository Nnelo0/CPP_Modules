/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:02:14 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/29 19:44:49 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:

		Brain* _brain;

	public:

		Cat();
		Cat(const Cat& cat);

		Cat& operator=(const Cat& cat);

		~Cat();

		void makeSound()const;

		void setIdea(unsigned int index, const std::string& idea);
		void getIdeas(void) const;
};
