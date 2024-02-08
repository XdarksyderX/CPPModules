/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:04:35 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/07 11:31:43 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const bool VERBOSE = false;

Fixed::Fixed() : rawBits(0)
{
	if (VERBOSE)
		std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	if (VERBOSE)
		std::cout << "Int constructor called" << std::endl;
	this->rawBits = value << this->fractionalBits;
}

Fixed::Fixed(const float value)
{
	if (VERBOSE)
		std::cout << "Float constructor called" << std::endl;
	this->rawBits = (int)roundf(value * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed &fixed)
{
	if (VERBOSE)
		std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	if (VERBOSE)
		std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	if (VERBOSE)
		std::cout << "Assignation operator called" << std::endl;
	this->rawBits = fixed.getRawBits();
	return (*this);
}

bool Fixed::operator<(const Fixed &other)
{
	return rawBits < other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other)
{
	return rawBits <= other.getRawBits();
}

bool Fixed::operator>(const Fixed &other)
{
	return rawBits > other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other)
{
	return rawBits >= other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other)
{
	return rawBits != other.getRawBits();
}

bool Fixed::operator==(const Fixed &other)
{
	return rawBits == other.getRawBits();
}

Fixed Fixed::operator+(const Fixed &other)
{
	Fixed result;
	result.setRawBits(rawBits + other.getRawBits());
	return result;
}

Fixed Fixed::operator-(const Fixed &other)
{
	Fixed result;
	result.setRawBits(rawBits - other.getRawBits());
	return result;
}

Fixed Fixed::operator*(const Fixed &other)
{
	Fixed result;
	long long temp = static_cast<long long>(this->rawBits) * static_cast<long long>(other.getRawBits());
	temp >>= Fixed::fractionalBits;
	result.setRawBits(static_cast<int>(temp));
	return result;
}

Fixed Fixed::operator/(const Fixed &other)
{
	Fixed result;
	long long temp = static_cast<long long>(this->rawBits) << Fixed::fractionalBits;
	temp /= other.getRawBits();
	result.setRawBits(static_cast<int>(temp));
	return result;
}

Fixed &Fixed::operator++(void)
{
	++this->rawBits;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;
	tmp.setRawBits(this->rawBits++);
	return tmp;
}

Fixed &Fixed::operator--(void)
{
	--this->rawBits;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;
	tmp.setRawBits(this->rawBits--);
	return tmp;
}

int Fixed::getRawBits(void) const
{
	if (VERBOSE)
		std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}

void Fixed::setRawBits(int const raw)
{
	if (VERBOSE)
		std::cout << "setRawBits member function called" << std::endl;
	this->rawBits = raw;
}

int Fixed::toInt(void) const
{
	return (this->rawBits >> this->fractionalBits);
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->rawBits) / (1 << this->fractionalBits));
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}
const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return f1;
	return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}
const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return f1;
	return f2;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}