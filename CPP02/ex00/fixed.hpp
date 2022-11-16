/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:21:02 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/24 04:48:12 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
    private:
        int					fixedPoint;
        static const int	binary;
    public:
        Fixed();
		Fixed(const Fixed &other);
        void    operator= (const Fixed &rhs);
		void    setRawBits(int const raw);
		int		getRawBits(void) const;
        ~Fixed();
};
