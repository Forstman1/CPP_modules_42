/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:55:05 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/29 11:14:51 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void	Animal::makeSound() const
{
    std::cout << "Animal Sound" << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "Animal Constructor been called" << std::endl;
    this->type = type;
}


std::string    Animal::getType() const 
{
    return (this->type);
}

void    Animal::setType(std::string type)
{
    this->type = type;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor been called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy Constructor been Called" << std::endl;
    this->type = other.type;
}

void	Animal::operator= (const Animal &rhs)
{
    if (this != &rhs)
        this->type = rhs.type;
}