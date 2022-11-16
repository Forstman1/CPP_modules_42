/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:20:48 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/18 04:46:08 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
    int  index;
	bool  full;
	Contact contact[8];
	public:
		void	setIndex();
		int		AddContact();
		void	getContact(int index);
		void	ShowContacts();
		void	print_contact(int i);
};

int ft_atoi(std::string number);
