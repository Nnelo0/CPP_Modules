/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:02:14 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/25 23:28:17 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	private:

	public:

		Cat();
		Cat(const Cat& cat);
		
		Cat& operator=(const Cat& cat);
		
		~Cat();

		void makeSound()const;
};
