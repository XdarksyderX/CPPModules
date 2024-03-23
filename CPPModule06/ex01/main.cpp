/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:17:51 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/23 18:17:52 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Serializer.hpp"

int main()
{
	Data mis_datos;
	mis_datos.param1 = 1;
	mis_datos.param2 = 2;

	std::cout << "Mis datos: param1 = " << mis_datos.param1 << "| param2 = " << mis_datos.param2 << std::endl;
	uintptr_t mis_datos_serializados = Serializer::serialize(&mis_datos);
	std::cout << "Dirección de memoria serializada: " << mis_datos_serializados << std::endl;
	Data *mis_datos_deserializados = Serializer::deserialize(mis_datos_serializados);
	std::cout	<< "Datos deserializados: param1 = "
				<< mis_datos_deserializados->param1
				<< " | param2 = " << mis_datos_deserializados->param2 << std::endl;
}
