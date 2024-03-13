/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:16:30 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/13 21:24:16 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	Intern	intern;
	AForm*	form;

	form = intern.makeForm("Presidential pardon", "target");
	if (form == NULL)
		return (1);
    
	try 
	{
        Bureaucrat bureaucrat("Test", 139);

        std::cout << "\n--------------- Intern created form ---------------" << std::endl;
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
    } 
	catch (std::exception &e) {
        std::cerr << e.what() << std::endl; }
	
	delete (form);
    return (0);
}
