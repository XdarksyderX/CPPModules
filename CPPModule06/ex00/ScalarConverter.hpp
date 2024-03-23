/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:17:48 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/23 18:32:13 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <iostream>
# include <climits>
# include <limits>
# include <cstdlib>
# include <cmath>

class ScalarConverter
{
	public:
		static void convert(const char *input);

	private:
		static const std::string specialTypes[];
		static const double inf;
		static const double nan;
		static bool isSpecialType(const std::string &input);
		static void convertAndPrint(double number);
		static bool isnan(double n);
		static bool isinf(double n);
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &s);
		ScalarConverter &operator=(const ScalarConverter &s);
};

#endif
