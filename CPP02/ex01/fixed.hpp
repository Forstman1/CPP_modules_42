/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:21:02 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/24 04:47:54 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int					fixedPoint;
        static const int	binary;
    public:
        Fixed();
        Fixed(const int integer);
        Fixed(const float floated);
		Fixed(const Fixed &other);
        void    operator= (const Fixed &rhs);
        float   toFloat(void) const;
        int     toInt(void) const;
		void    setRawBits(int const raw);
		int		getRawBits(void) const;
        ~Fixed();
};

std::ostream& operator<< (std::ostream& out, const Fixed& f1);
