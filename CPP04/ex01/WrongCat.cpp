/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:50:04 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/26 00:13:43 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	std::cout << "[WrongCat] default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongCat): WrongAnimal (wrongCat)
{
	std::cout << "[WrongCat] Copy Constructor called" << std::endl;
}
	
WrongCat& WrongCat::operator=(const WrongCat& wrongCat)
{
	std::cout << "[WrongCat] Copy assignment operator called" << std::endl;
	this->type = wrongCat.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor called" << std::endl;
}

void WrongCat::makeSound()const
{
	std::cout << "WrongCat with type : " << getType() << " says a WrongCat sound : WWooEMMm !!" << std::endl;
}