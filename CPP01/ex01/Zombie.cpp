/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 08:43:40 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/11 09:46:18 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << GREEN << "\nZombie:" << " created" << RESET << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << RED << "\nZombie: " << _name << " deleted" << RESET << std::endl;
}

void Zombie::announce( void )
{
	std::cout << "\n" << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;	
}

void Zombie::setName(std::string name)
{
	_name = name;
}
