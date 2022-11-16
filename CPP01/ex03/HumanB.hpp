/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:04:45 by sahafid           #+#    #+#             */
/*   Updated: 2022/09/13 16:04:46 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB {
    std::string	name;
    Weapon		*weapon;
    public:
        void	attack(void);
		void	setName(std::string name);
        void    setWeapon(Weapon &weapon);
		HumanB(std::string name);
};
