/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:48:14 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/02 14:29:07 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		return std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0;

    for (int j = 1; argv[j]; j++)
	{
		for (int i = 0; argv[j][i]; i++)
			argv[j][i] = toupper(argv[j][i]);
		std::cout << argv[j];
	}

	std::cout << std::endl;

	return 0;
}