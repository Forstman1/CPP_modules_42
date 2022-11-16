/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:55:10 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/29 11:12:13 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void    Dog::makeSound() const
{
    std::cout << "Bark Bark" << std::endl;
}

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Constructor been called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor been called" << std::endl;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog copy Constructor Called" << std::endl;
    *this = other;
}

void	Dog::operator= (const Dog &rhs)
{
    if (this != &rhs)
        this->type = rhs.type;
}