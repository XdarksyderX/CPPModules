/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:31:32 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/07 23:54:18 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor" << std::endl;
};

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor" << std::endl;
};

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
};

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	if (this == &copy)
		return (*this);
	WrongAnimal::operator=(copy);
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Meowwwwww!!!" << std::endl;
}