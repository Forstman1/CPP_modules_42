/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:49:31 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/31 08:40:25 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form {
		private:
	std::string _target;
		public:
	RobotomyRequestForm(std::string target);
	void	execute(Bureaucrat const & executor) const;
	RobotomyRequestForm();
    void    operator= (const RobotomyRequestForm &rhs);
    RobotomyRequestForm(const RobotomyRequestForm &rhs);
    ~RobotomyRequestForm();
};