/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:22:48 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/04 16:23:11 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t)
{
	type = t;
}

Weapon::Weapon(const Weapon &other)
{
	type = other.type;
}

Weapon::~Weapon()
{
}

Weapon &Weapon::operator=(Weapon &other)
{
	type = other.type;
	return *this;
}

void Weapon::setType(std::string t)
{
	type = t;
}

const std::string &Weapon::getType()
{
	return type;
}