/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casting.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:11:12 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/03 11:08:34 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ctype.h>
#include <stdexcept>
#include <iomanip>

class Casting {
		private:
	std::string input;
	std::string type;
		public:
	Casting(std::string input);
	void	checkTypes(void);
	void	checkInt(void);
	void	checkFloat(void);
	void	checkDouble(void);
	void	checkChar(void);
	void	converttoalltypes(void);
	void	intToAll();
	void	charToAll();
	void	floatToAll();
	void	doubleToAll();
	~Casting();
};