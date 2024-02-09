/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 00:01:33 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/10 00:18:40 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type) : type(type)
{
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria::~AMateria()
{
}

AMateria	&AMateria::operator=(const AMateria &copy)
{
	if (this == &copy)
		return (*this);
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return type;
}

void    AMateria::use( ICharacter& target )
{
    std::cout << "AMateria " << type << " used on " << target.getName() << std::endl;
}