/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:05:11 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/28 11:06:48 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:
	void    makeSound() const;
	WrongCat();
	WrongCat(WrongCat const & src);
	~WrongCat();
	WrongCat&	operator=(WrongCat const & rhs);

};

