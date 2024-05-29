/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:19:15 by migarci2          #+#    #+#             */
/*   Updated: 2024/05/29 19:48:59 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <climits>
#include <cstdlib>

const std::string dataFile = "data.csv";

bool is_leap_year(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

bool 	isDateValid(const std::string &date)
{
	std::stringstream ss(date);
	std::string year, month, day;

	std::getline(ss, year, '-');
	std::getline(ss, month, '-');
	ss >> day;

	int y = std::atoi(year.c_str());
	int m = std::atoi(month.c_str());
	int d = std::atoi(month.c_str());

	if (y < 0)
		return false;
	if (m < 1 || m > 12)
		return false;
	if (d < 1 || d > 31 || ((m == 2 && d > 28) && !is_leap_year(y)) || ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30))
		return false;
	return true;
}

void	getTransactions(const std::string &filePath)
{
	BitcoinExchange exchange(dataFile);
	std::ifstream file(filePath.c_str());
	std::string row;
	std::getline(file, row);
	while (std::getline(file, row))
	{
		std::stringstream ss(row);
		std::string rowDate;
		double rowAmount;

		std::getline(ss, rowDate, '|');
		ss >> rowAmount;
		if (!isDateValid(rowDate))
			std::cerr << "Error: bad input => " << rowDate << std::endl;
		else if (rowAmount < 0)
			std::cerr << "Error: not a positive number." << std::endl;
		else if (rowAmount > INT_MAX)
			std::cerr << "Error: too large number." << std::endl;
		else
		std::cout	<< rowDate
					<< " => "
					<< rowAmount
					<< " = "
					<< exchange.getExchangeRate(rowDate) * rowAmount << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " file" << std::endl;
		return 1;
	}
	try
	{
		getTransactions(argv[1]);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}
