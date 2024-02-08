/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:38:58 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/06 12:38:59 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

enum ComplaintType
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	UNKNOWN
};

ComplaintType getComplaintType(const std::string &str)
{
	if (str == "DEBUG")
		return DEBUG;
	else if (str == "INFO")
		return INFO;
	else if (str == "WARNING")
		return WARNING;
	else if (str == "ERROR")
		return ERROR;
	else
		return UNKNOWN;
}

int main(int argc, char **argv)
{
	Harl harl;
	std::string input;

	if (argc != 2)
	{
		std::cout << "This program only accepts 1 argument" << std::endl;
		return (1);
	}
	input = argv[1];
	ComplaintType complaint = getComplaintType(input);

	switch (complaint)
	{
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			break;
		case UNKNOWN:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		default:
			std::cout << "Harl filter error" << std::endl;
			break;
	}
}