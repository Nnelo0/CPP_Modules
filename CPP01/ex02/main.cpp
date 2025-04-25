/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:35:47 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/14 08:40:29 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# define GREEN   "\033[1;32m"
# define CYAN    "\033[1;36m"
# define MAGENTA "\033[1;35m"
# define RESET   "\033[0m"

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout 	<< std::endl;
	std::cout	<< MAGENTA 
				<< "|---------------------MEMORY_TEST---------------------|" << RESET << std::endl;
	std::cout 	<< GREEN
				<< "|                                                     |" << RESET << std::endl;
	std::cout 	<< GREEN
				<< "|------------------ADDRESS_OF_STRING------------------|\n";
	std::cout 	<< GREEN
				<< "|                                                     |" << RESET << std::endl;
	std::cout	<< GREEN
				<< "|                    "<<CYAN << &string << GREEN << "                   |" << RESET << std::endl;
	std::cout	<< GREEN	
				<< "|                                                     |" << RESET << std::endl;
	std::cout	<< GREEN
				<< "|-----------------ADDRESS_OF_STRINGPTR----------------|\n";
	std::cout	<< GREEN	
				<< "|                                                     |" << RESET << std::endl;
	std::cout	<< GREEN
				<< "|                   "<< CYAN << &stringPTR << GREEN"                    |" << RESET << std::endl;
	std::cout	<< GREEN	
				<< "|                                                     |" << RESET << std::endl;
	std::cout	<< GREEN 
				<< "|-----------------ADDRESS_OF_STRINGREF----------------|\n";
	std::cout	<< GREEN
				<< "|                                                     |" << RESET << std::endl;
	std::cout	<< GREEN
				<< "|                   "<< CYAN << &stringREF << GREEN "                    |" << RESET << std::endl;
	std::cout	<< GREEN	
				<< "|                                                     |" << RESET << std::endl;
	std::cout	<< MAGENTA
				<< "|-----------------------------------------------------|\n\n" << RESET << std::endl;
	std::cout	<< MAGENTA
				<< "|----------------------VALUE_TEST---------------------|" << RESET << std::endl;
	std::cout	<< GREEN	
				<< "|                                                     |" << RESET << std::endl;
	std::cout	<< GREEN
				<< "|--------------------VALUE_OF_STRING------------------|\n";
	std::cout	<< GREEN
				<< "|                                                     |" << RESET << std::endl;
	std::cout	<< GREEN
				<< "|                   "<< CYAN << string << GREEN "                  |" << RESET << std::endl;
	std::cout	<< GREEN	
				<< "|                                                     |" << RESET << std::endl;
	std::cout	<< GREEN
				<< "|-------------------VALUE_OF_STRINGPTR----------------|\n";
	std::cout	<< GREEN
				<< "|                                                     |" << RESET << std::endl;
	std::cout	<< GREEN
				<< "|                   "<< CYAN << *stringPTR << GREEN "                  |" << RESET << std::endl;
	std::cout	<< GREEN	
				<< "|                                                     |" << RESET << std::endl;
	std::cout	<< GREEN 
				<< "|-------------------VALUE_OF_STRINGREF----------------|" << std::endl;
	std::cout	<< GREEN
				<< "|                                                     |" << RESET << std::endl;
	std::cout	<< GREEN
				<< "|                   "<< CYAN << stringREF << GREEN "                  |" << RESET << std::endl;
	std::cout	<< GREEN	
				<< "|                                                     |" << RESET << std::endl;
	std::cout	<< MAGENTA
				<< "|-----------------------------------------------------|\n" << RESET << std::endl;

	return 0;
}
