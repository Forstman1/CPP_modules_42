/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:10:46 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/31 08:40:27 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form {
		private:
	std::string _target;
		public:
	PresidentialPardonForm(std::string target);
	void	execute(Bureaucrat const & executor) const;
	PresidentialPardonForm();
    void    operator= (const PresidentialPardonForm &rhs);
    PresidentialPardonForm(const PresidentialPardonForm &rhs);
    ~PresidentialPardonForm();
};