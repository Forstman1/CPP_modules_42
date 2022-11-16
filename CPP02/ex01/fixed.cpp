/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:21:10 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/24 05:09:49 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int const Fixed::binary = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(other.getRawBits());
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(rhs.getRawBits());
}

Fixed::Fixed(const int integer)
{
	setRawBits(integer << this->binary);
}

float   Fixed::toFloat(void) const
{
	return(getRawBits() / (float)(1 << this->binary));
}

int     Fixed::toInt(void) const
{
	return((int)(getRawBits() >> this->binary));
}

Fixed::Fixed(const float floated)
{
	setRawBits(roundf(floated * (float)(1 << this->binary)));
}

std::ostream& operator<< (std::ostream& out, const Fixed& f1)
{
	out << f1.toFloat();
	return out;
}
