/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:36:03 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/10 00:28:54 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

};

Cure::Cure(const Cure &copy) : AMateria(copy)
{

};

Cure::~Cure()
{

};

Cure &Cure::operator=(const Cure &copy)
{
	if (this == &copy)
		return (*this);
	AMateria::operator=(copy);
	return (*this);
}

Cure* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}