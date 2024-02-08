/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:22:35 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/04 16:22:36 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w) : name(n), weapon(w)
{
}

HumanA::HumanA(const HumanA &other) : name(other.name), weapon(other.weapon)
{
}

HumanA::~HumanA()
{
}

HumanA &HumanA::operator=(const HumanA &other)
{
	if (this != &other)
	{
		name = other.name;
		weapon = other.weapon;
	}
	return *this;
}

void HumanA::setName(std::string n)
{
	name = n;
}

std::string HumanA::getName()
{
	return name;
}

void HumanA::setWeapon(Weapon &w)
{
	weapon = w;
}

Weapon &HumanA::getWeapon()
{
	return weapon;
}

void HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
