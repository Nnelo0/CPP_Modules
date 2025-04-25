/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 09:16:55 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/18 09:18:35 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

# define RESET   "\033[0m"
# define RED     "\033[1;31m"
# define GREEN   "\033[1;32m"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr  << RED << "The program must have 3 arguments : " << GREEN << "filename" << RED << ", " << GREEN << "string1 " << RED << "and " << GREEN << "string2" << RED <<"!" << RESET << std::endl;
		return 2;
	}
	else
	{
		std::string filename = argv[1];
		std::string string1 = argv[2];
		std::string string2 = argv[3];

		std::ifstream inputFile(filename.c_str());
		if (!inputFile)
		{
			std::cerr  << RED << "Impossible to read the file : " << GREEN << filename << RESET << std::endl;
			return 2;
		}

		std::ofstream outputFile((filename + ".replace").c_str());
		if (!outputFile)
		{
			std::cerr  << RED << "Impossible to create the file : " << GREEN << filename + ".replace" << RESET << std::endl;
			return 2;
		}

		std::string line;
		bool firstLine = true;

		while (std::getline(inputFile, line))
		{
			size_t pos = 0;
			while ((pos = line.find(string1, pos)) != std::string::npos)
			{
				line.erase(pos, string1.length());
				line.insert(pos, string2);
				pos += string2.length();
			}
			if (!firstLine)
				outputFile << "\n";
			outputFile << line;
			firstLine = false;
		}

		inputFile.clear();
		inputFile.seekg(-1, std::ios_base::end);
		
		char lastChar;
		inputFile.get(lastChar);
		if (lastChar == '\n')
			outputFile << '\n';

		inputFile.close();
		outputFile.close();
	}
	return 0;
}
