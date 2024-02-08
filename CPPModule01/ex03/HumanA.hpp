/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:22:37 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/04 16:23:33 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA(std::string n, Weapon &w);
		HumanA(const HumanA &other);
		~HumanA();

		HumanA &operator=(const HumanA &other);

		void attack();
		void setWeapon(Weapon &w);
		void setName(std::string n);

		std::string getName();
		Weapon &getWeapon();
};

#endif