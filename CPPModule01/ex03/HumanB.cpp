/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:22:38 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/04 16:24:25 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n), weapon(NULL)
{
}

HumanB::HumanB(const HumanB &other) : name(other.name), weapon(other.weapon)
{
}

HumanB::~HumanB()
{
}

HumanB &HumanB::operator=(const HumanB &other)
{
	if (this != &other)
	{
		name = other.name;
		weapon = other.weapon;
	}
	return *this;
}

void HumanB::setName(std::string n)
{
	name = n;
}

std::string HumanB::getName()
{
	return name;
}

void HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
}

Weapon &HumanB::getWeapon()
{
	return *weapon;
}

void HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
