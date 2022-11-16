/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:21:02 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/24 04:45:06 by sahafid          ###   ########.fr       */
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
        // constructors
        Fixed();
        Fixed(const int integer);
        Fixed(const float floated);
		Fixed(const Fixed &other);

        // operator overloads
        void    operator= (const Fixed &rhs);

        // comparison operators
        bool	operator> (const Fixed &rhs);
        bool	operator< (const Fixed &rhs);
        bool	operator== (const Fixed &rhs);
        bool	operator<= (const Fixed &rhs);
        bool	operator>= (const Fixed &rhs);
        bool	operator!= (const Fixed &rhs);

        // arithmetic operators
        float		operator+ (const Fixed &rhs);
        float		operator- (const Fixed &rhs);
        float		operator* (const Fixed &rhs);
        float		operator/ (const Fixed &rhs);


        // increment | decrement

        Fixed	operator++(void);
        Fixed	operator++(int);
        Fixed	operator--(void);
        Fixed	operator--(int);

        // overloaded member functions

        static Fixed& min(Fixed& left, Fixed& right);
        static Fixed& min(const Fixed& left, const Fixed& right); 

        static Fixed& max(Fixed& left, Fixed& right);
        static Fixed& max(const Fixed& left, const Fixed& right);
        // member fucntions
        float   toFloat(void) const;
        int     toInt(void) const;
		void    setRawBits(int const raw);
		int		getRawBits(void) const;
        // destructor
        ~Fixed();
};
std::ostream& operator<< (std::ostream& out, const Fixed& f1);
