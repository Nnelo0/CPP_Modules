/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:48:50 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/25 23:50:01 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:

		WrongCat();
		WrongCat(const WrongCat& wrongCat);

		WrongCat& operator=(const WrongCat& wrongCat);
	
		~WrongCat();
	
		void makeSound()const;

};
