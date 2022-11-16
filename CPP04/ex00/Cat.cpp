/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:55:14 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/29 11:11:52 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void    Cat::makeSound() const
{
    std::cout << "miaaaawww" << std::endl;
}

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Constructor Called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor been called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal("Cat")
{
    std::cout << "Cat copy Constructor Called" << std::endl;
    *this = other;
}

void	Cat::operator= (const Cat &rhs)
{
    if (this != &rhs)
        this->type = rhs.type;
}