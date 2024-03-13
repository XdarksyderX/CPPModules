/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 21:14:55 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/13 21:24:59 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &i) { (void) i; }

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &i)
{
	(void) i;
	return (*this);
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	std::string	formNames[] = {"Robotomy request", "Presidential pardon", "Shrubbery creation"};

	AForm*	forms[] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target)};
	
	for (int i = 0; i < 3; i++)
	{
		if (name == formNames[i])
		{
			std::cout << "Intern creates " << name << " form" << std::endl;
			for (int j = 0; j < 3; j++)
			{
				if (j != i)
					delete forms[j];
			}
			return (forms[i]);
		}
	}
	std::cout << "Intern cannot create " << name << " form" << std::endl;
	return (NULL);
}
