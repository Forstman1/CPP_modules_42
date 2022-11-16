/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:09:01 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/26 10:08:41 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


class ClapTrap {
        protected:
    std::string name;
    int         hitpoints;
    int         energy;
    int         attackdamage;
        public:
    std::string	getName(void);
	int	    gethitpoints(void);
	int	    getEnergy(void);
	int	    getAttackDamage(void);
    void	attack(const std::string& target);
    void	takeDamage(unsigned int amount);
    void	beRepaired(unsigned int amount);

    ClapTrap(const ClapTrap &other);
    void    operator= (const ClapTrap &rhs);
	ClapTrap(std::string name);
	~ClapTrap();
};
