/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:01:24 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/07 12:55:33 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "Scavtrap " << name << " created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap " << name << " destroyed" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "Scavtrap " << name << " has entered in Gate keeper mode" << std::endl;
}
