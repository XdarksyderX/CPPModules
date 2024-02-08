/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:37:39 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/04 16:50:21 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int replaceInFile(const char *filename, const std::string &s1, const std::string &s2);

int main(int argc, const char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace filename s1 s2" << std::endl;
		return 1;
	}
	const char *filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (replaceInFile(filename, s1, s2))
	{
		std::cout << "Error: could not replace in file" << std::endl;
		return 1;
	}
	return 0;
}
