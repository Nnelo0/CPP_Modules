/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:22:32 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/11 09:18:41 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << CYAN << "Flash McQueen vérifie la pression de ses pneus... tout est parfait pour une course tranquille." << RESET << std::endl;
}

void Harl::info( void )
{
	std::cout << GREEN << "Doc Hudson informe que la piste est un peu glissante après le virage 3. Prudence conseillée." << RESET << std::endl;

}

void Harl::warning( void )
{
	std::cout << YELLOW << "Luigi signale qu\'un boulon est mal serré sur la roue arrière droite ! Il faut s\'arrêter aux stands !" << RESET << std::endl;

}

void Harl::error( void )
{
	std::cout << RED << "Alerte moteur ! Guido crie que de la fumée sort du capot. La course est terminée pour aujourd\'hui !" << RESET << std::endl;
}

void Harl::complain( std::string level )
{
	void (Harl::*ptr_type[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i != 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*ptr_type[i])();
			break ;
		}
	}
}
