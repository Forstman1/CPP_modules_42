/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:47:22 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/26 10:06:38 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public :
        void    guardGate(void);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &other);
        void    operator= (const ScavTrap &rhs);
        void	attack(const std::string& target);
        ~ScavTrap();
};