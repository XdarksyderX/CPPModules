/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:13:00 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/06 12:17:48 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl harl;
	
	std::cout << "Calling Harl.complain(DEBUG):" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\nCalling Harl.complain(INFO):" << std::endl;
	harl.complain("INFO");

	std::cout << "\nCalling Harl.complain(WARNING):" << std::endl;
	harl.complain("WARNING");

	std::cout << "\nCalling Harl.complain(ERROR):" << std::endl;
	harl.complain("ERROR");
}