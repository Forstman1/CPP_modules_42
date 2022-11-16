/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:04:32 by sahafid           #+#    #+#             */
/*   Updated: 2022/09/14 12:37:40 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA {
    std::string	name;
    Weapon		&weapon;
    public:
        void	attack(void);
		void	setName(std::string name);
		HumanA(std::string name, Weapon &weapons);
};
