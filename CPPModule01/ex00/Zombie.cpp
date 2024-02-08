/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:06:06 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/06 11:44:09 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string n) : name(n)
{
}

Zombie::~Zombie()
{
	std::cout << name << " has died" << std::endl;
}

void Zombie::setName(std::string n)
{
	name = n;
}

std::string Zombie::getName()
{
	return name;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}