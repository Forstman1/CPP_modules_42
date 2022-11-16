/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:33:27 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/20 00:41:12 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Contact
{
	private:
		int			index;
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string	Phone_Number;
		std::string Darkest_Secret;
	public:
		// setters
		void	Set_Index(int i);
		void	Set_FirstName(std::string info);
		void	Set_LastName(std::string info);
		void	Set_NickName(std::string info);
		void	Set_PhoneNumber(std::string info);
		void	Set_DarkestSecret(std::string info);
		// getters
		int			Get_Index(void);
		std::string	Get_FirstName(void);
		std::string	Get_LastName(void);
		std::string	Get_NickName(void);
		std::string	Get_PhoneNumber(void);
		std::string	Get_DarkestSecret(void);
};

