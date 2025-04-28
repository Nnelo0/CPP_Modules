/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:04:32 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/28 18:05:33 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

class Brain
{
	private:

		std::string ideas[100];

	public:

		Brain();
		Brain(const Brain& other);
		
		Brain& operator=(const Brain& other);
		
		~Brain();

};
