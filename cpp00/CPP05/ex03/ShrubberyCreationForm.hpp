/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:21:50 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/31 08:40:21 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form {
		private:
	std::string _target;
		public:
	ShrubberyCreationForm(std::string target);
	void	execute(Bureaucrat const & executor) const;
	ShrubberyCreationForm();
    void    operator= (const ShrubberyCreationForm &rhs);
    ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
    ~ShrubberyCreationForm();
};