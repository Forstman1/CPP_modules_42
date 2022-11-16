/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:05:32 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/29 11:12:33 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


void    WrongCat::makeSound() const
{
    std::cout << "miaaaawww" << std::endl;
}

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor been called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "WrongCat copy Constructor Called" << std::endl;
    *this = other;
}

WrongCat&	WrongCat::operator= (const WrongCat &rhs)
{
    if (this != &rhs)
        this->type = rhs.type;
	return *this;
}