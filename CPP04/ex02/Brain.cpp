/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:11:08 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/29 11:15:48 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor been Called" << std::endl;
    for (size_t i = 0; i < ideas->length(); i++)
        ideas[i] = 'h';
}

Brain::~Brain()
{
    std::cout << "Brain Destructor been called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "brain copy Constructor been Called" << std::endl;
    for (size_t i = 0; i < ideas->length(); i++)
        ideas[i] = other.ideas[i];
}

void	Brain::operator= (const Brain &rhs)
{
    if (this != &rhs)
    {
        for (size_t i = 0; i < ideas->length(); i++)
            ideas[i] = rhs.ideas[i];
    }
}
