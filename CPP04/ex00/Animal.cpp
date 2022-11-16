/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:55:05 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/29 11:11:36 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void	Animal::makeSound() const
{
    std::cout << "Animal Sound" << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "Animal Constructor Called" << std::endl;
    this->type = type;
}

Animal::Animal()
{
    std::cout << "Animal Constructor Called" << std::endl;
    this->type = "random";
}

std::string    Animal::getType() const 
{
    return (this->type);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor been Called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy Constructor Called" << std::endl;
    *this = other;
}

void	Animal::operator= (const Animal &rhs)
{
    if (this != &rhs)
        this->type = rhs.type;
}
