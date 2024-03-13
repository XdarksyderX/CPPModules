/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:16:30 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/12 22:58:26 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <limits>

int main()
{	
	std::string name;
	std::cout << "Introduce un nombre para el burocrata: ";
	std::getline(std::cin, name);

	int grade;
	do {
		std::cout << "Introduce una nota valida para empezar: ";
		std::cin >> grade;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		
	} while (grade > 150 || grade < 1);
	Bureaucrat burocrata(name, grade);
	std::string election;
	do {
		std::cout << "Introduce un comando (+ -> incremento | - -> decremento | FIN -> Salir ): ";
		std::cin >> election;
		if (election == "+")
		{
			try {
				burocrata.incrementGrade();
			}
			catch (const Bureaucrat::GradeTooHighException &e)
			{
				std::cout << "Te has pasado... no puedes sumar más" << std::endl;
			}
		}
		if (election == "-")
		{
			try {
				burocrata.decrementGrade();
			}
			catch (const Bureaucrat::GradeTooHighException &e)
			{
				std::cout << "Te has quedado corto... no puedes restar más" << std::endl;
			}
		}
		std::cout << "El burocrata tiene una nota de: " << burocrata.getGrade() << std::endl;
	} while(election != "FIN");
	std::cout << burocrata << std::endl;
}