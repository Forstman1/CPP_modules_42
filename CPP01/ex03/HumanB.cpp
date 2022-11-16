/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:05:03 by sahafid           #+#    #+#             */
/*   Updated: 2022/09/13 16:05:04 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack(void)
{
    if (weapon)
        std::cout << this->name << " attack with their " << weapon->getType() << std::endl;
}

void	HumanB::setName(std::string name)
{
    this->name = name;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}


HumanB::HumanB(std::string name)
{
    setName(name);
    this->weapon = NULL;
}