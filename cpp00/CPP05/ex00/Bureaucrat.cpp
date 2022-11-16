/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:20:14 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/31 13:48:37 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Sry your grade is already too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Sry your grade is already too Low");
}

std::string    Bureaucrat::getName(void)
{
    return (this->name);
}

int     Bureaucrat::getGrade(void)
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

std::ostream& operator<< (std::ostream& out, Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return out;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    this->grade = grade;
	if (getGrade() > 150)
		throw GradeTooLowException();
	else if (getGrade() < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat() : name("random")
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
