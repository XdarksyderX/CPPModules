/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:27:52 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/07 23:52:39 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal default constructor" << std::endl;
};

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal type constructor" << std::endl;
};

Animal::Animal(const Animal &copy) : type(copy.type)
{
	std::cout << "Animal copy constructor" << std::endl;
};

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
};

Animal &Animal::operator=(const Animal &copy)
{
	if (this == &copy)
		return (*this);
	type = copy.type;
	return (*this);
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}