/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 20:40:38 by migarci2          #+#    #+#             */
/*   Updated: 2024/05/29 21:13:15 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <ctime>
#include <sstream>
#include <iomanip>
#include <algorithm>

int numberOfDigits(int n)
{
	int count = 0;
	n = n < 0 ? -n : n;
	if (n == 0)
		return 1;
	while (n != 0)
	{
		n = n / 10;
		++count;
	}
	return count;
}

int main(int argc, char **argv)
{

	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " <list of numbers>" << std::endl;
		return 1;
	}

	std::istringstream iss(argv[1]);
	std::vector<int> v;
	std::list<int> l;

	int maxDigits = 1;

	std::string token;
	while (iss >> token)
	{
		if (isdigit(token[0]))
		{
			std::istringstream numberStream(token);
			int number;
			numberStream >> number;
			v.push_back(number);
			l.push_back(number);
			maxDigits = std::max(maxDigits, numberOfDigits(number));
		}
		else
		{
			std::cerr << "Error" << std::endl;
			return 1;
		}
	}

	std::cout << "\e[43;31mOriginal Input: \e[0m" << std::endl;
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		std::cout << " \u001b[31m" << std::setw(maxDigits) << *it << "\e[0m";

	std::cout << std::endl << std::endl;

	std::clock_t start = clock();
	mergeSortVector(v);
	std::clock_t end = clock();

	double elapsedTime = 1000000.0 * (end - start) / CLOCKS_PER_SEC;
	std::cout << "\e[44;37mVector: \e[0m" << std::endl;
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		std::cout << " \u001b[32m" << std::setw(maxDigits) << *it << "\e[0m";
	std::cout << std::endl;
	std::cout << "\e[34;47mTime: " << elapsedTime << "us\e[0m" << std::endl;

	std::cout << std::endl;

	start = clock();
	mergeSortList(l);
	end = clock();

	elapsedTime = 1000000.0 * (end - start) / CLOCKS_PER_SEC;
	std::cout << "\e[44;37mList: \e[0m" << std::endl;
	for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it)
		std::cout << " \u001b[32m" << std::setw(maxDigits) << *it << "\e[0m";
	std::cout << std::endl;
	std::cout << "\e[34;47mTime: " << elapsedTime << "us\e[0m" << std::endl;
}