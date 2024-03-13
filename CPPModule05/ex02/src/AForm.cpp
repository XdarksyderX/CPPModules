/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:24:49 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/13 16:39:27 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("default"), isSigned(false), requiredGradeToSign(75), requiredGradeToExec(50) {}
AForm::AForm(std::string n, bool iS, int rGS, int rGE) : name(n), isSigned(iS)
{
	setRequiredGradeToExec(rGE);
	setRequiredGradeToSign(rGS);
}

AForm::AForm(std::string n, int rGS, int rGE) : name(n), isSigned(false)
{
	setRequiredGradeToExec(rGE);
	setRequiredGradeToSign(rGS);
}

AForm::AForm(const AForm &f) : name(f.name), isSigned(f.isSigned)
{
	setRequiredGradeToExec(f.requiredGradeToExec);
	setRequiredGradeToSign(f.requiredGradeToExec);
}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &f)
{
	if (this == &f)
		return *this;
	isSigned = f.isSigned;
	requiredGradeToExec = f.requiredGradeToExec;
	requiredGradeToSign = f.requiredGradeToSign;
	return (*this);
}

void	AForm::setRequiredGradeToExec(int g)
{
	if (g > 150)
		throw GradeTooLowException();
	if (g < 1)
		throw GradeTooHighException();
	requiredGradeToExec = g;
}

void	AForm::setRequiredGradeToSign(int g)
{
	if (g > 150)
		throw GradeTooLowException();
	if (g < 1)
		throw GradeTooHighException();
	requiredGradeToSign = g;
}

std::string AForm::getName() const
{
	return (name);
}

bool		AForm::getIsSigned() const
{
	return (isSigned);
}

int			AForm::getRequiredGradeToSign() const
{
	return (requiredGradeToSign);
}

int			AForm::getRequiredGradeToExec() const
{
	return (requiredGradeToExec);
}

void	AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > requiredGradeToSign)
		throw GradeTooLowException();
	isSigned = true;
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char	*AForm::NotSignedException::what() const throw()
{
	return ("Form not signed!");
}

std::ostream &operator<<(std::ostream &o, const AForm &f)
{
	o	<< "AForm name: " << f.getName() << std::endl
		<< "Is signed? " << std::boolalpha << f.getIsSigned() << std::endl
		<< "Required grade to sign: " << f.getRequiredGradeToSign() << std::endl
		<< "Required grade to exec: " << f.getRequiredGradeToExec();
	return (o);
}
