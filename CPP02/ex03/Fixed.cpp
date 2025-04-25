/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:37:50 by ebroudic          #+#    #+#             */
/*   Updated: 2025/04/18 11:15:37 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_numberOfBits = 8;

Fixed::Fixed()
{
	_valueOfNumber = 0;
}

Fixed::~Fixed()
{
	
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	if (this != &copy)
		this->_valueOfNumber = copy.getRawBits();
	return *this;
}

Fixed::Fixed(const int value)
{
	_valueOfNumber = value << _numberOfBits;
}

Fixed::Fixed(const float value)
{
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

bool Fixed::operator>(const Fixed &fixed) const
{
	return this->_valueOfNumber > fixed._valueOfNumber;
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return this->_valueOfNumber < fixed._valueOfNumber;
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return this->_valueOfNumber >= fixed._valueOfNumber;
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return this->_valueOfNumber <= fixed._valueOfNumber;	
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return this->_valueOfNumber == fixed._valueOfNumber;
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return this->_valueOfNumber != fixed._valueOfNumber;
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	float res = this->toFloat() + fixed.toFloat();
	return Fixed(res);
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	float res = this->toFloat() - fixed.toFloat();
	return Fixed(res);
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	float res = this->toFloat() * fixed.toFloat();
	return Fixed(res);
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	float res = this->toFloat() / fixed.toFloat();
	return Fixed(res);
}

Fixed &Fixed::operator++()
{
	this->_valueOfNumber += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;

	++this->_valueOfNumber;
	return tmp;
}

Fixed &Fixed::operator--()
{
	this->_valueOfNumber -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;

	--this->_valueOfNumber;
	return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	else
		return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}
