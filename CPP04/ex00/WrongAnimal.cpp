/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:44:52 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/29 11:12:24 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


void	WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sound" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal Constructor Called" << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Constructor Called" << std::endl;
    this->type = "random";
}


std::string    WrongAnimal::getType() const 
{
    return (this->type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor been Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "WrongAnimal copy Constructor Called" << std::endl;
    *this = other;
}

WrongAnimal&	WrongAnimal::operator= (const WrongAnimal &rhs)
{
    if (this != &rhs)
        this->type = rhs.type;
	return *this;
}
