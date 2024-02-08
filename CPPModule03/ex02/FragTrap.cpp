/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:01:24 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/07 13:57:57 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap " << name << " created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " destroyed" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (energyPoints < 1)
	{
		std::cout << "FragTrap " << name << " is out of energy." << std::endl;
		return;
	
	}
	std::cout << "FragTrap " << name << " wants to high five!" << std::endl;
	this->energyPoints -= 1;
}
