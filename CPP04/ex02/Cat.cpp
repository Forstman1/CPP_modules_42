/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:55:14 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/29 11:15:56 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void    Cat::makeSound() const
{
    std::cout << "miaaaawww" << std::endl;
}

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Constructor been Called" << std::endl;
    this->brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat Destructor been called" << std::endl;
    delete this->brain;
}

Cat::Cat(const Cat &other) : Animal("Cat")
{
    std::cout << "cat copy Constructor been Called" << std::endl;
    brain = new Brain();
    for (size_t i = 0; i < brain->ideas->length(); i++)
        brain->ideas[i] = other.brain->ideas[i];
}

void	Cat::operator= (const Cat &rhs)
{
    if (this != &rhs)
    {
        for (size_t i = 0; i < brain->ideas->length(); i++)
            brain->ideas[i] = rhs.brain->ideas[i];
    }
}
