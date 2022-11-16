/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:08:58 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/26 12:53:27 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::attack(const std::string& target)
{
	if (this->energy <= 0 || this->hitpoints <= 0)
		return ;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackdamage << " points of damage!" << std::endl;
	this->energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitpoints <= 0)
	{
		std::cout << "clapTrap is dead" << std::endl;
		return ;
	}
	this->hitpoints -= amount;
	if (this->hitpoints <= 0)
		std::cout << "clapTrap is dead" << std::endl;
	else
		std::cout << "clapTrap " << this->name << " has taken " << amount << " of damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy <= 0 || this->hitpoints <= 0)
		return ;
	std::cout << "clapTrap " << this->name << " has been repaired with this amount " << amount << std::endl;
    this->hitpoints += amount;
	this->energy--;
}


std::string	ClapTrap::getName(void)
{
	return (this->name);
}

int	    ClapTrap::gethitpoints(void)
{
	return (this->hitpoints);
}

int	    ClapTrap::getEnergy(void)
{
	return (this->energy);
}

int	    ClapTrap::getAttackDamage(void)
{
	return (this->attackdamage);
}




ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constractor called" << std::endl;
	this->name = name;
	hitpoints = 10;
	energy = 10;
	attackdamage = 0;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

void    ClapTrap::operator= (const ClapTrap &rhs)
{
	if (this != &rhs)
	{	
		this->name = rhs.name;
		hitpoints = rhs.hitpoints;
		energy = rhs.energy;
		attackdamage = rhs.attackdamage;
	}
}