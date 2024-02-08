/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:45:33 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/07 13:00:34 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap	fragTrap("Juanillo");
	
	fragTrap.takeDamage(5);
	fragTrap.attack("enemy");
	fragTrap.beRepaired(3);
	fragTrap.highFivesGuys();
	return (0);
}
