/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:17:16 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/27 08:43:36 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap Constractor called" << std::endl;
    energy = 100;
    hitpoints = 100;
    attackdamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Been Destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (this->hitpoints <= 0 || this->energy <= 0)
        return ;
    std::cout << "High Five Guys" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other.name)
{
    *this = other;
}

void    FragTrap::operator= (const FragTrap &rhs)
{
    if (this != &rhs)
    {
        name = rhs.name;
        energy = rhs.energy;
        hitpoints = rhs.hitpoints;
        attackdamage = rhs.attackdamage;
    }
}
