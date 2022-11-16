/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:58:06 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/28 12:21:02 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Brain {
        public:
    std::string ideas[100];
    Brain();
    ~Brain();
    Brain(const Brain &other);
    void	operator= (const Brain &rhs);
};
