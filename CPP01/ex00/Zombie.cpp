/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 08:43:40 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/14 09:21:37 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;

	std::cout << GREEN << "Zombie: " << _name << " created" << RESET << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << RED << "Zombie: " << _name << " deleted\n" << RESET << std::endl;
}

void Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}