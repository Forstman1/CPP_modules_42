/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:15:15 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/25 15:20:45 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public :
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap &other);
        void    operator= (const FragTrap &rhs);
        void highFivesGuys(void);
};