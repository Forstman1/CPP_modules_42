/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 02:09:47 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/02 14:08:00 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


template <typename T>
void    swap(T &value1, T &value2)
{
    T temp;

    temp = value1;
    value1 = value2;
    value2 = temp;
}

template <typename T>
T    min(T value1, T value2)
{
    if (value1 > value2)
        return (value2);
    return value1;
}

template <typename T>
T    max(T value1, T value2)
{
    if (value1 <= value2)
        return (value2);
    return value1;
}
