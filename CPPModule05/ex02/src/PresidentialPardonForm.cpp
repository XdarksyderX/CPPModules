/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:51:42 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/13 17:36:07 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("default") {}
PresidentialPardonForm::PresidentialPardonForm(std::string t) : AForm("PresidentialPardonForm", 25, 5), target(t) {}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &pPF) : AForm("PresidentialPardonForm", 25, 5), target(pPF.target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &pPF)
{
	if (&pPF == this)
		return (*this);
	this->target = pPF.target;
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (!getIsSigned())
		throw AForm::NotSignedException();
	if (getRequiredGradeToExec() < executor.getGrade())
		throw AForm::GradeTooHighException();
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
