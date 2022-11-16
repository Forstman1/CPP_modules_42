/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:20:14 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/31 09:36:31 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    this->grade = grade;
	if (getGrade() > 150)
		throw GradeTooLowException();
	else if (getGrade() <= 0)
		throw GradeTooHighException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade too Low");
}

std::string    Bureaucrat::getName(void) const
{
    return (this->name);
}

int     Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

void    Bureaucrat::increment(void)
{
	if ((getGrade() - 1) > 150)
		throw GradeTooLowException();
	else if ((getGrade() - 1) <= 0)
		throw GradeTooHighException();
    this->grade -= 1;
}

void    Bureaucrat::decrement(void)
{
	if ((getGrade() + 1) > 150)
		throw GradeTooLowException();
	else if ((getGrade() + 1) <= 0)
		throw GradeTooHighException();
    this->grade += 1;
}

void	Bureaucrat::signForm(Form &form)
{
	try {
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << getName() << " couldn't signed " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const &form) const
{
	try {
		form.execute(*this);
		std::cout << getName() << " executed " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << getName() << " couldn't execute Form because " << e.what() << std::endl;
	}
}

std::ostream& operator<< (std::ostream& out, Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return out;
}

Bureaucrat::Bureaucrat() : name("")
{
	grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
{
	*this = rhs;
}

void    Bureaucrat::operator= (const Bureaucrat &rhs)
{
	if (this != &rhs)
	{
		this->grade = rhs.grade;
	}
}

Bureaucrat::~Bureaucrat()
{
	
}