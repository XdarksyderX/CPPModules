/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:16:30 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/13 21:19:50 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <limits>

int main()
{	
	std::string form_name;
	std::cout << "Introduce un nombre para el formulario: ";
	std::getline(std::cin, form_name);

	int form_sign_req;
	do {
		std::cout << "Introduce una requerimiento de firma: ";
		std::cin >> form_sign_req;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		
	} while (form_sign_req > 150 || form_sign_req < 1);

	int form_exec_req;
	do {
		std::cout << "Introduce una requerimiento de ejecución: ";
		std::cin >> form_exec_req;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		
	} while (form_exec_req > 150 || form_exec_req < 1);

	Form formulario = Form(form_name, form_sign_req, form_exec_req);

	std::string bureaucrat_name;
	std::cout << "Introduce un nombre para el burocrata: ";
	std::getline(std::cin, bureaucrat_name);

	int bureaucrat_grade;
	do {
		std::cout << "Introduce una nota valida para empezar: ";
		std::cin >> bureaucrat_grade;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		
	} while (bureaucrat_grade > 150 || bureaucrat_grade < 1);
	Bureaucrat burocrata(bureaucrat_name, bureaucrat_grade);
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


		std::string sign;
		std::cout << "¿Firmamos el formulario " << formulario.getName() << "? (N/y) ";
		std::cin >> sign;
		
		if (sign == "y" || sign == "Y")
			burocrata.signForm(formulario);
	} while(election != "FIN" && !formulario.getIsSigned());
	std::cout << burocrata << std::endl;
	std::cout << formulario << std::endl;
}