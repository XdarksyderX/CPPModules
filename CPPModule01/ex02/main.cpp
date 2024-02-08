/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:19:43 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/04 15:26:47 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *ptr = &s;
	std::string &ref = s;

	std::cout << "Variable Address: " << &s << std::endl;
	std::cout << "Pointer Address: " << ptr << std::endl;
	std::cout << "Reference Address: " << &ref << std::endl;

	std::cout << std::endl;

	std::cout << "Variable Value: " << s << std::endl;
	std::cout << "Pointer Value: " << *ptr << std::endl;
	std::cout << "Reference Value: " << ref << std::endl;
}