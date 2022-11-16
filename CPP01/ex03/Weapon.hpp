/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:04:03 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/21 04:56:32 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Weapon {
    private:
    std::string	type;
    public:
	    std::string getType(void);
        void        setType(std::string type);
        Weapon(std::string type);
};
