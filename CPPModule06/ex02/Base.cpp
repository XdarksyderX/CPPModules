/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:27:09 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/23 21:31:02 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base *generate(void)
{
	srand(static_cast<unsigned int>(time(NULL)));
	int sel = rand() % 3;
	switch (sel)
	{
		case 0:
			return new A;
			break;
		case 1:
			return new B;
			break;
		case 2:
			return new C;
			break;
		default:
			return new A;
	}
}

void	identify(Base *p)
{
	std::string name;
	if (dynamic_cast<A*>(p))
		name = "A";
	else if (dynamic_cast<B*>(p))
		name = "B";
	else
		name = "C";
	std::cout << "El puntero apunta a una clase de tipo " << name << std::endl;
}

void	identify(Base &p)
{
	std::string name = "";
	try
	{
		dynamic_cast<A&>(p);
		name = "A";
	}
	catch (...) {}
	try
	{
		dynamic_cast<B&>(p);
		name = "B";
	}
	catch (...) {}
	try
	{
		dynamic_cast<C&>(p);
		name = "C";
	}
	catch (...) {}
	std::cout << "La referencia es del tipo de la clase " << name << std::endl;
}