/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:55:10 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/29 12:42:48 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void    Dog::makeSound() const
{
    std::cout << "Bark Bark" << std::endl;
}

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Constructor been Called" << std::endl;
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog Destructor been called" << std::endl;
    delete this->brain;
}


Dog::Dog(const Dog &other) : Animal("Dog")
{
    std::cout << "Dog copy Constructor been Called" << std::endl;
    brain = new Brain();
    for (size_t i = 0; i < brain->ideas->length(); i++)
        brain->ideas[i] = other.brain->ideas[i];
}

void	Dog::operator= (const Dog &rhs)
{
    if (this != &rhs)
    {
        for (size_t i = 0; i < brain->ideas->length(); i++)
            brain->ideas[i] = rhs.brain->ideas[i];
    }
}
