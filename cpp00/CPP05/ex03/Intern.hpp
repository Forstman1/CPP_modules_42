/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:01:59 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/31 13:21:10 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class RobotomyRequestForm;
class ShrubberyCreationForm;
class PresidentialPardonForm;
class Form;

class Intern
{
    public:
    class FormNotFound : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
    Form    *robotform(std::string target);
    Form    *shrubberyform(std::string target);
    Form    *presidentialform(std::string target);
    Form   *makeForm(std::string form, std::string target);
    Intern();
    void    operator= (const Intern &rhs);
    Intern(const Intern &rhs);
    ~Intern();
};
