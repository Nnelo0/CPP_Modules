/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:04:32 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/29 21:22:54 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain
{
	private:

		std::string ideas[100];

	public:

		Brain();
		Brain(const Brain& other);

		Brain& operator=(const Brain& other);

		~Brain();

		void setIdea(unsigned int index, const std::string& idea);
		std::string getIdea(unsigned int index) const;
};
