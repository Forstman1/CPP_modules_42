/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:48:42 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/27 08:42:37 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void    ScavTrap::guardGate()
{
    if (this->hitpoints <= 0 || this->energy <= 0)
        return ;
    std::cout << "ScavTrap " << getName() << " is now in Gate Keeper mode" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "scavTrap Constractor called" << std::endl;
    hitpoints = 100;
	energy = 50;
	attackdamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Been Destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other.name)
{
    *this = other;
}

void    ScavTrap::operator= (const ScavTrap &rhs)
{
    if (this != &rhs)
    {
        name = rhs.name;
        energy = rhs.energy;
        hitpoints = rhs.hitpoints;
        attackdamage = rhs.attackdamage;
    }
}

void    ScavTrap::attack(const std::string& target)
{
     if (this->energy <= 0 || this->hitpoints <= 0)
		return ;
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackdamage << " points of damage!" << std::endl;
	this->energy--;
}
