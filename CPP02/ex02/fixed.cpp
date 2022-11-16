/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:21:10 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/24 04:44:59 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int const Fixed::binary = 8;

Fixed::Fixed(void)
{
	setRawBits(0);
}

Fixed::Fixed(const Fixed& other)
{
	setRawBits(other.getRawBits());
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

void    Fixed::setRawBits(int const raw)
{
    this->fixedPoint = raw;
}

int		Fixed::getRawBits(void) const
{
	return (this->fixedPoint);
}

void	Fixed::operator= (const Fixed &rhs)
{
	setRawBits(rhs.getRawBits());
}

Fixed::Fixed(const int integer)
{
	setRawBits(integer << this->binary);
}

Fixed::Fixed(const float floated)
{
	setRawBits(roundf(floated * (float)(1 << this->binary)));
}

float   Fixed::toFloat(void) const
{
	return(getRawBits() / (float)(1 << this->binary));
}

int     Fixed::toInt(void) const
{
	return((int)(getRawBits() >> this->binary));
}


std::ostream& operator<< (std::ostream& out, const Fixed& f1)
{
	out << f1.toFloat();
	return out;
}

// operators overload

bool	Fixed::operator> (const Fixed &rhs)
{
	if (getRawBits() > rhs.getRawBits())
		return (true);
	return false;
}


bool	Fixed::operator< (const Fixed &rhs)
{
	if (getRawBits() < rhs.getRawBits())
		return (true);
	return false;
}

bool	Fixed::operator== (const Fixed &rhs)
{
	if (getRawBits() == rhs.getRawBits())
		return (true);
	return false;
}

bool	Fixed::operator<= (const Fixed &rhs)
{
	if (getRawBits() <= rhs.getRawBits())
		return (true);
	return false;
}

bool	Fixed::operator>= (const Fixed &rhs)
{
	if (getRawBits() >= rhs.getRawBits())
		return (true);
	return false;
}

bool	Fixed::operator!= (const Fixed &rhs)
{
	if (getRawBits() != rhs.getRawBits())
		return (true);
	return false;
}

float		Fixed::operator+ (const Fixed &rhs)
{
	return ((getRawBits() + rhs.getRawBits()) / 256.0);
}

float		Fixed::operator- (const Fixed &rhs)
{
	return (toFloat() - rhs.toFloat());
}

float		Fixed::operator* (const Fixed &rhs)
{
	return (toFloat() * rhs.toFloat());
}

float		Fixed::operator/ (const Fixed &rhs)
{
	return (toFloat() / rhs.toFloat());
}

Fixed	Fixed::operator++(void)
{
	this->fixedPoint++;
	return (*this);
}
Fixed	Fixed::operator++(int)
{
	Fixed c(*this);
	this->fixedPoint++;
	return (c);
}

Fixed	Fixed::operator--(void)
{
	this->fixedPoint--;
	return (*this);
}
Fixed	Fixed::operator--(int)
{
	Fixed c(*this);
	this->fixedPoint--;
	return (c);
}


Fixed& Fixed::min(Fixed& left, Fixed& right)
{
	if (left.fixedPoint > right.fixedPoint)
		return (right);
	return (left);
}

Fixed& Fixed::min(const Fixed& left, const Fixed& right)
{
	if (left.fixedPoint > right.fixedPoint)
		return ((Fixed&)right);
	return ((Fixed&)left);
}

Fixed& Fixed::max(Fixed& left, Fixed& right)
{
	if (left.fixedPoint < right.fixedPoint)
		return (right);
	return (left);
}

Fixed& Fixed::max(const Fixed& left, const Fixed& right)
{
	if (left.fixedPoint < right.fixedPoint)
		return (Fixed&)right;
	return (Fixed&)left;
}
