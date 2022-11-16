/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:04:55 by sahafid           #+#    #+#             */
/*   Updated: 2022/09/14 12:38:02 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack(void)
{
    std::cout << this->name << " attack with their " << weapon.getType() << std::endl;
}

void	HumanA::setName(std::string name)
{
    this->name = name;
}

HumanA::HumanA(std::string name, Weapon &weapons): weapon(weapons)
{
    setName(name);
}