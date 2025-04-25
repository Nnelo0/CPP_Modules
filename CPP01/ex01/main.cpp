/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:54:13 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/14 09:24:09 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 5;
	
	Zombie *horde = zombieHorde(N, "romain");
	
	for (int i = 0; i != N; i++)
	{
		horde[i].announce();
	}

	delete [] horde;
	
	return 0;
}