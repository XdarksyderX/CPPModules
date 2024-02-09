/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:36:03 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/10 00:02:43 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

};

Ice::Ice(const Ice &copy) : AMateria(copy)
{

};

Ice::~Ice()
{

};

Ice &Ice::operator=(const Ice &copy)
{
	if (this == &copy)
		return (*this);
	AMateria::operator=(copy);
	return (*this);
}

Ice* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}