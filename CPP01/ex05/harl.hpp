/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:06:57 by sahafid           #+#    #+#             */
/*   Updated: 2022/09/15 23:52:11 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

class harl
{
		void	info(void);
    	void    debug(void);
		void	warning(void);
		void	error(void);
    public:
		void complain(std::string level);
};
