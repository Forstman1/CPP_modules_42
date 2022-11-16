/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 02:56:33 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/06 10:26:31 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename A>
void    iter(A	items, int	lenght, void(*f)(int))
{
	for (int i = 0; i < lenght; i++)
		f(items[i]);
}
