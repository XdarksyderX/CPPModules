/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:24:49 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/13 16:20:25 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), isSigned(false), requiredGradeToSign(75), requiredGradeToExec(50) {}
Form::Form(std::string n, bool iS, int rGS, int rGE) : name(n), isSigned(iS)
{
	setRequiredGradeToExec(rGE);
	setRequiredGradeToSign(rGS);
}

Form::Form(std::string n, int rGS, int rGE) : name(n), isSigned(false)
{
	setRequiredGradeToExec(rGE);
	setRequiredGradeToSign(rGS);
}

Form::Form(const Form &f) : name(f.name), isSigned(f.isSigned)
{
	setRequiredGradeToExec(f.requiredGradeToExec);
	setRequiredGradeToSign(f.requiredGradeToExec);
}

Form::~Form() {}

Form &Form::operator=(const Form &f)
{
	if (this == &f)
		return *this;
	isSigned = f.isSigned;
	requiredGradeToExec = f.requiredGradeToExec;
	requiredGradeToSign = f.requiredGradeToSign;
	return (*this);
}

void	Form::setRequiredGradeToExec(int g)
{
	if (g > 150)
		throw GradeTooLowException();
	if (g < 1)
		throw GradeTooHighException();
	requiredGradeToExec = g;
}

void	Form::setRequiredGradeToSign(int g)
{
	if (g > 150)
		throw GradeTooLowException();
	if (g < 1)
		throw GradeTooHighException();
	requiredGradeToSign = g;
}

std::string Form::getName() const
{
	return (name);
}

bool		Form::getIsSigned() const
{
	return (isSigned);
}

int			Form::getRequiredGradeToSign() const
{
	return (requiredGradeToSign);
}

int			Form::getRequiredGradeToExec() const
{
	return (requiredGradeToExec);
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > requiredGradeToSign)
		throw GradeTooLowException();
	isSigned = true;
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

std::ostream &operator<<(std::ostream &o, const Form &f)
{
	o	<< "Form name: " << f.getName() << std::endl
		<< "Is signed? " << std::boolalpha << f.getIsSigned() << std::endl
		<< "Required grade to sign: " << f.getRequiredGradeToSign() << std::endl
		<< "Required grade to exec: " << f.getRequiredGradeToExec();
	return (o);
}
