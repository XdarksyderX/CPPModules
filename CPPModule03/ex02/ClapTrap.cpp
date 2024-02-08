/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:36:17 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/07 12:52:48 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap " << this->name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "ClapTrap " << this->name << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " has been destroyed!" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage)
{
	this->name = name;
	this->hitPoints = hitPoints;
	this->energyPoints = energyPoints;
	this->attackDamage = attackDamage;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	if (!energyPoints)
	{
		std::cout << "ClapTrap " << this->name << " has no energy points to attack!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
	energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	hitPoints -= amount;
	if (hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has died!" << std::endl;
		hitPoints = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 10)
	{
		std::cout << "ClapTrap " << this->name << " has already full health!" << std::endl;
		return ;
	}
	if (static_cast<unsigned int>(energyPoints) < amount)
	{
		std::cout << "ClapTrap " << this->name << " has not enough energy points to be repaired!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " has been repaired for " << amount << " points!" << std::endl;
	hitPoints += amount;
}
