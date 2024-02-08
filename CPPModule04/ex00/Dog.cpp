/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:31:32 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/07 23:31:57 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor" << std::endl;
};

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor" << std::endl;
};

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
};

Dog &Dog::operator=(const Dog &copy)
{
	if (this == &copy)
		return (*this);
	Animal::operator=(copy);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof!!!!" << std::endl;
}