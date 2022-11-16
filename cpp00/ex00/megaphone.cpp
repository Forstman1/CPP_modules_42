/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:37:27 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/19 01:49:00 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main(int argc, char	*argv[])
{
	char c;
	
	(void)argc;
	if (!argv[1])
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	for (int i = 1; argv[i] != NULL; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
			c = toupper(argv[i][j]);
			std::cout << c;
		}
		if (argv[i + 1])
			std::cout << " ";
	}
    return (0);
}