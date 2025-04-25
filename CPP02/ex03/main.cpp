/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:14:40 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/25 09:50:33 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#define RESET	"\033[0m"
#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define YELLOW	"\033[1;33m"
#define BLUE	"\033[1;34m"
#define MAGENTA	"\033[1;35m"
#define CYAN	"\033[1;36m"
#define BROWN "\033[1;38;2;139;69;19m"
#define WHITE	"\033[1;37m"


int main(void)
{
	{
		Point a(2, 0);
		Point b(10, 0);
		Point c(5, 10);

		Point point(5, 5);
		
		std::cout << MAGENTA << "Point a : " << CYAN "X" << YELLOW << " = {" << CYAN << a.getX() << YELLOW << "} and " << CYAN << "Y " << YELLOW << "= {" << CYAN << a.getY() << YELLOW << "}" << RESET << std::endl;
		std::cout << std::endl;
		
		std::cout << BLUE << "Point b : " << CYAN "X" << YELLOW << " = {" << CYAN << b.getX() << YELLOW << "} and " << CYAN << "Y " << YELLOW << "= {" << CYAN << b.getY() << YELLOW << "}" << RESET << std::endl;
		std::cout << std::endl;
		
		std::cout << WHITE << "Point c : " << CYAN "X" << YELLOW << " = {" << CYAN << c.getX() << YELLOW << "} and " << CYAN << "Y " << YELLOW << "= {" << CYAN << c.getY() << YELLOW << "}" << RESET << std::endl;
		std::cout << std::endl;
		
		std::cout << BROWN << "Point P : " << CYAN "X" << YELLOW << " = {" << CYAN << point.getX() << YELLOW << "} and " << CYAN << "Y " << YELLOW << "= {" << CYAN << point.getY() << YELLOW << "}" << RESET << std::endl;
		std::cout << BROWN << "(P is on the triangle)" << RESET << std::endl;
		std::cout << std::endl;

		
		if (bsp(a, b, c, point))
			std::cout << GREEN << "✅ The point is on the triangle !" << RESET << std::endl;
		else
			std::cout << RED << "❌ The point is not on the triangle !" << RESET << std::endl;
	}

	std::cout << std::endl;
	
	{
		Point a(0, 0);
		Point b(10, 0);
		Point c(5, 10);

		Point point(11, 5);
		
		std::cout << MAGENTA << "Point a : " << CYAN "X" << YELLOW << " = {" << CYAN << a.getX() << YELLOW << "} and " << CYAN << "Y " << YELLOW << "= {" << CYAN << a.getY() << YELLOW << "}" << RESET << std::endl;
		std::cout << std::endl;
		
		std::cout << BLUE << "Point b : " << CYAN "X" << YELLOW << " = {" << CYAN << b.getX() << YELLOW << "} and " << CYAN << "Y " << YELLOW << "= {" << CYAN << b.getY() << YELLOW << "}" << RESET << std::endl;
		std::cout << std::endl;
		
		std::cout << WHITE << "Point c : " << CYAN "X" << YELLOW << " = {" << CYAN << c.getX() << YELLOW << "} and " << CYAN << "Y " << YELLOW << "= {" << CYAN << c.getY() << YELLOW << "}" << RESET << std::endl;
		std::cout << std::endl;
		
		std::cout << BROWN << "Point P : " << CYAN "X" << YELLOW << " = {" << CYAN << point.getX() << YELLOW << "} and " << CYAN << "Y " << YELLOW << "= {" << CYAN << point.getY() << YELLOW << "}" << RESET << std::endl;
		std::cout << BROWN << "(P is outside the triangle)" << RESET << std::endl;
		std::cout << std::endl;
		
		if (bsp(a, b, c, point))
			std::cout << GREEN << "✅ The point is on the triangle !" << RESET << std::endl;
		else
			std::cout << RED << "❌ The point is not on the triangle !" << RESET << std::endl;
	}

	std::cout << std::endl;
	

	{
		Point a(0, 0);
		Point b(10, 0);
		Point c(5, 10);

		Point point(0, 0);
		
		std::cout << MAGENTA << "Point a : " << CYAN "X" << YELLOW << " = {" << CYAN << a.getX() << YELLOW << "} and " << CYAN << "Y " << YELLOW << "= {" << CYAN << a.getY() << YELLOW << "}" << RESET << std::endl;
		std::cout << std::endl;
		
		std::cout << BLUE << "Point b : " << CYAN "X" << YELLOW << " = {" << CYAN << b.getX() << YELLOW << "} and " << CYAN << "Y " << YELLOW << "= {" << CYAN << b.getY() << YELLOW << "}" << RESET << std::endl;
		std::cout << std::endl;
		
		std::cout << WHITE << "Point c : " << CYAN "X" << YELLOW << " = {" << CYAN << c.getX() << YELLOW << "} and " << CYAN << "Y " << YELLOW << "= {" << CYAN << c.getY() << YELLOW << "}" << RESET << std::endl;
		std::cout << std::endl;
		
		std::cout << BROWN << "Point P : " << CYAN "X" << YELLOW << " = {" << CYAN << point.getX() << YELLOW << "} and " << CYAN << "Y " << YELLOW << "= {" << CYAN << point.getY() << YELLOW << "}" << RESET << std::endl;
		std::cout << BROWN << "(P is on the vertex a)" << RESET << std::endl;
		std::cout << std::endl;
		
		if (bsp(a, b, c, point))
			std::cout << GREEN << "✅ The point is on the triangle !" << RESET << std::endl;
		else
			std::cout << RED << "❌ The point is not on the triangle !" << RESET << std::endl;
	}

	std::cout << std::endl;

	{
		Point a(0, 0);
		Point b(10, 0);
		Point c(5, 10);

		Point point(5, 0);
		
		std::cout << MAGENTA << "Point a : " << CYAN "X" << YELLOW << " = {" << CYAN << a.getX() << YELLOW << "} and " << CYAN << "Y " << YELLOW << "= {" << CYAN << a.getY() << YELLOW << "}" << RESET << std::endl;
		std::cout << std::endl;
		
		std::cout << BLUE << "Point b : " << CYAN "X" << YELLOW << " = {" << CYAN << b.getX() << YELLOW << "} and " << CYAN << "Y " << YELLOW << "= {" << CYAN << b.getY() << YELLOW << "}" << RESET << std::endl;
		std::cout << std::endl;
		
		std::cout << WHITE << "Point c : " << CYAN "X" << YELLOW << " = {" << CYAN << c.getX() << YELLOW << "} and " << CYAN << "Y " << YELLOW << "= {" << CYAN << c.getY() << YELLOW << "}" << RESET << std::endl;
		std::cout << std::endl;
		
		std::cout << BROWN << "Point P : " << CYAN "X" << YELLOW << " = {" << CYAN << point.getX() << YELLOW << "} and " << CYAN << "Y " << YELLOW << "= {" << CYAN << point.getY() << YELLOW << "}" << RESET << std::endl;
		std::cout << BROWN << "(P is on the edge AB)" << RESET << std::endl;
		std::cout << std::endl;
		
		if (bsp(a, b, c, point))
			std::cout << GREEN << "✅ The point is on the triangle !" << RESET << std::endl;
		else
			std::cout << RED << "❌ The point is not on the triangle !" << RESET << std::endl;
	}
	
	return (0);
}