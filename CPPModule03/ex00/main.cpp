/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:45:33 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/07 11:58:35 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	clapTrap("Juanito");

	clapTrap.takeDamage(5);
	clapTrap.attack("enemy");
	clapTrap.beRepaired(3);
	return (0);
}
