/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:06:48 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/13 17:37:24 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("default") {}
RobotomyRequestForm::RobotomyRequestForm(std::string t) : AForm("RobotomyRequestForm", 72, 45), target(t) {}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rRF) : AForm("RobotomyRequestForm", 72, 45), target(rRF.target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rRF)
{
	if (&rRF == this)
		return (*this);
	this->target = rRF.target;
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!getIsSigned())
		throw AForm::NotSignedException();
	if (getRequiredGradeToExec() < executor.getGrade())
		throw AForm::GradeTooHighException();
	srand(static_cast<unsigned int>(time(0)));
	if (random() % 2)
		std::cout << target << " has been robotomized" << std::endl;
	else
		std::cout << target << " robotomy failed" << std::endl;
}
