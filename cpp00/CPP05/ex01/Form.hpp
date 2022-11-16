/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:16:31 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/31 11:12:53 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    	private:
    const	std::string name;
    bool        signe;
	const	int	gradetosign;
	const	int	gradetoexec;
    	public:
	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
	Form(std::string name, int gradetosign, int gradetoexec);
	std::string getName();
	bool		getSigned();
	int			getGradeToSign();
	int			getGradeToexec();
    void	beSigned(Bureaucrat &bureaucrat);
	Form();
    void    operator= (const Form &rhs);
    Form(const Form &rhs);
    ~Form();
};

std::ostream& operator<< (std::ostream& out, Form &form);