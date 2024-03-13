/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:45:45 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/13 16:17:33 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150) {}
Bureaucrat::Bureaucrat(int g) : name("default") { setGrade(g); }
Bureaucrat::Bureaucrat(const std::string n) : name(n), grade(150) {}
Bureaucrat::Bureaucrat(const std::string n, int g) : name(n) { setGrade(g); }
Bureaucrat::Bureaucrat(const Bureaucrat &b) : name(b.name), grade(b.grade) {}

Bureaucrat::~Bureaucrat() {};

void	Bureaucrat::setGrade(int g)
{
	if (g > 150)
		throw GradeTooHighException();
	else if (g < 1)
		throw GradeTooLowException();
	grade = g;
}

int Bureaucrat::getGrade() const
{
	return (grade);
}

std::string Bureaucrat::getName() const
{
	return (name);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
	if (this == &b)
		return *this;
	this->grade = b.getGrade();
	return (*this);
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

void	Bureaucrat::incrementGrade()
{
	setGrade(grade + 1);
}

void	Bureaucrat::decrementGrade()
{
	setGrade(grade - 1);
}

void	Bureaucrat::signForm(Form &f)
{
	try {
		f.beSigned(*this);
	}
	catch (const Form::GradeTooLowException &e)
	{
		std::cout << name << " couldn't sign " << f.getName() << " because: " << e.what() << std::endl;
	}
	std::cout << name << " signed " << f.getName() << std::endl;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (o);
}
