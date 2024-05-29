/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:03:19 by migarci2          #+#    #+#             */
/*   Updated: 2024/04/21 19:35:47 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string &fileName)
{
	std::ifstream file(fileName.c_str());
	std::string row;

	if (!file.is_open())
		throw std::runtime_error("Could not open file");

	std::getline(file, row);
	while (std::getline(file, row))
	{
		try
		{	
			std::stringstream ss(row);
			std::string rowDate;
			double rowRate;
			std::getline(ss, rowDate, ',');
			ss >> rowRate;
			exchangeRate[rowDate] = rowRate;
		}
		catch (const std::exception &e)
		{
			continue;
		}
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	exchangeRate = other.exchangeRate;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)	
		exchangeRate = other.exchangeRate;
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

double BitcoinExchange::getExchangeRate(const std::string &date) const
{
	std::map<std::string, double>::const_iterator it = exchangeRate.find(date);
	std::map<std::string, double>::const_iterator current = exchangeRate.begin();
	if (it == exchangeRate.end())
	{
		for (it = exchangeRate.begin(); it != exchangeRate.end(); it++)
		{
			if (it->first > date)
				return current->second;
			current = it;
		}
		return current->second;
	}
	return it->second;
}
