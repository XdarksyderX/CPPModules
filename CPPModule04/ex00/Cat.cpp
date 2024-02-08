/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:31:32 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/07 23:35:31 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor" << std::endl;
};

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor" << std::endl;
};

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
};

Cat &Cat::operator=(const Cat &copy)
{
	if (this == &copy)
		return (*this);
	Animal::operator=(copy);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meowwwwww!!!" << std::endl;
}