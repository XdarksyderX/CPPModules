/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:17:44 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/23 18:35:28 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

const std::string ScalarConverter::specialTypes[] = {"nan", "+inf", "-inf"};
const double ScalarConverter::inf = 1.0/0.0;
const double ScalarConverter::nan = 0.0/0.0;

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &s)
{
	(void) s;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &s)
{
	*this = s;
	return (*this);
}

bool ScalarConverter::isnan(double n)
{
	return (n == (0.0/0.0));
}

bool ScalarConverter::isinf(double n)
{
	return (n == (1.0/0.0) || n == (-1.0/0.0));
}

bool	ScalarConverter::isSpecialType(const std::string &input)
{
	return (input == "nan" || input == "+inf" || input == "-inf");
}

void	ScalarConverter::convertAndPrint(double number)
{
	std::cout << "char: ";
	if (number < CHAR_MIN || number > CHAR_MAX || std::isnan(number) || std::isinf(number))
		std::cout << "impossible" << std::endl;
	else if (std::isprint(static_cast<char>(number)))
		std::cout << "'" << static_cast<char>(number) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	std::cout << "int: ";
	if (number < INT_MIN || number > INT_MAX || std::isnan(number) || std::isinf(number))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(number) << std::endl;

	std::cout << "float: ";
	if (ScalarConverter::isnan(number))
		std::cout << "nan";
	else if (ScalarConverter::isinf(number))
		std::cout << (number < 0 ? "-" : "") << "inf";
	else
		std::cout << static_cast<float>(number);
	std::cout << "f" << std::endl;

	std::cout << "double: ";
	if (ScalarConverter::isnan(number))
		std::cout << "nan";
	else if (ScalarConverter::isinf(number))
		std::cout << (number < 0 ? "-" : "") << "inf";
	else
		std::cout << number;
	std::cout << std::endl;
}

void ScalarConverter::convert(const char *input) {
    std::string inputStr(input);

    if (inputStr.empty())
	{
        std::cout << "Error: empty input" << std::endl;
        return ;
    }

    if (isSpecialType(inputStr))
	{
        double number;
        if (inputStr == "nan")
            number = ScalarConverter::nan;
        else if (inputStr == "+inf")
            number = ScalarConverter::inf;
        else if (inputStr == "-inf")
            number = -ScalarConverter::inf;
        convertAndPrint(number);
    }
	else if (inputStr.length() == 1 && !std::isdigit(inputStr[0]))
	{
		convertAndPrint(static_cast<double>(inputStr[0]));
	}
	else
	{
        char *endPtr;
        double number = strtod(input, &endPtr);
        if (*endPtr != '\0' && (*endPtr != 'f' || *(endPtr + 1) != '\0'))
		{
            std::cout << "Error: invalid input" << std::endl;
            return;
        }
        convertAndPrint(number);
    }
}