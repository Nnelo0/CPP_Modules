/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:37:50 by ebroudic          #+#    #+#             */
/*   Updated: 2025/06/30 08:57:17 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_numberOfBits = 8;

Fixed::Fixed(): _valueOfNumber(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->_valueOfNumber = fixed.getRawBits();
	return *this;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_valueOfNumber = value << _numberOfBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_valueOfNumber = roundf(value * (1 << _numberOfBits));
}

int Fixed::getRawBits( void ) const
{
	return _valueOfNumber;
}

void Fixed::setRawBits( int const raw )
{
	_valueOfNumber = raw;
}

float Fixed::toFloat( void ) const
{
	return (float)_valueOfNumber / (float)(1 << _numberOfBits);
}

int Fixed::toInt( void ) const
{
	return _valueOfNumber >> _numberOfBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
