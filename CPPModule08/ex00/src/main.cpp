/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:45:06 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/27 12:03:48 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <set>

#include "easyfind.hpp"

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> miVector(arr, arr + sizeof(arr) / sizeof(arr[0]));
	std::set<int> miSet;
    miSet.insert(1);
    miSet.insert(2);
    miSet.insert(3);
    miSet.insert(4);
    miSet.insert(5);
    std::vector<int>::iterator resultVector = easyfind(miVector, 5);
	std::set<int>::iterator resultSet = easyfind(miSet, 5);

    if (resultVector != miVector.end())
        std::cout << "Elemento encontrado: " << *resultVector << std::endl;
	else
		std::cout << "Elemento no encontrado." << std::endl;

	if (resultSet != miSet.end())
        std::cout << "Elemento encontrado: " << *resultSet << std::endl;
    else
        std::cout << "Elemento no encontrado." << std::endl;
}
