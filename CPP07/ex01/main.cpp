/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 02:55:35 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/06 09:12:24 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inter.hpp"

void	print(int value)
{
	std::cout << value << std::endl;
}

int main()
{
    int *array = new int[5];

	array[0] = 2;
	array[1] = 3;
	array[2] = 9;
	array[3] = -55;
	array[4] = 1; 

	iter(array, 5, print);
    return 0;
}