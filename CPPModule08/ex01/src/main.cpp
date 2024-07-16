/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:45:06 by migarci2          #+#    #+#             */
/*   Updated: 2024/04/17 21:00:32 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <string>
#include <iostream>
#include <limits>

int main()
{
    size_t max;
    std::cout << "Introduce el número de elementos del span: ";
    std::cin >> max;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    Span miSpan(max);
    std::string line;

    while (true)
    {
        std::cout << "Introduce numeros (FIN para terminar): ";
        std::getline(std::cin, line);
        if (line == "FIN")
            break;
        try
        {
            miSpan.addNumber(std::atoi(line.c_str()));
        }
        catch (const std::invalid_argument &e)
        {
            std::cout << "Numero no valido: " << line << std::endl;
        }
        catch (const std::out_of_range &e)
        {
            std::cout << "Numero fuera de rango: " << line << std::endl;
        }
    }

    try
    {
        std::cout << "LONGEST SPAN: " << miSpan.longestSpan() << std::endl;
        std::cout << "SHORTEST SPAN: " << miSpan.shortestSpan() << std::endl;
    }
    catch (const Span::SpanTooSmallException &e)
    {
        std::cout << "No hay suficientes elementos para calcular los spans." << std::endl;
    }
}
