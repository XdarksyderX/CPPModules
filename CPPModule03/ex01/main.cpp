/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:45:33 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/07 12:28:47 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	scavTrap("Juanito");
	
	scavTrap.takeDamage(5);
	scavTrap.attack("enemy");
	scavTrap.beRepaired(3);
	scavTrap.guardGate();
	return (0);
}
