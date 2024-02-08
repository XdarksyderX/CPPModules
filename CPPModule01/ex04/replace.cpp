/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:00:23 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/06 12:00:24 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>

void replace(std::string &str, const std::string &s1, const std::string &s2)
{
    size_t pos = 0;
    while ((pos = str.find(s1, pos)) != std::string::npos)
	{
        str.erase(pos, s1.length());
        str.insert(pos, s2);
        pos += s2.length();
    }
}

int replaceInFile(const std::string &filename, const std::string &s1, const std::string &s2)
{
	std::ifstream file(filename);
	if (!file.is_open())
		return 1;
	std::string line;
	std::string content;
	while (std::getline(file, line))
	{
		content += line + "\n";
	}
	file.close();
	replace(content, s1, s2);
	std::ofstream outfile((filename + ".replace").c_str());
	outfile << content;
	if (!outfile.good())
		return 1;
	outfile.close();
	return 0;
}
