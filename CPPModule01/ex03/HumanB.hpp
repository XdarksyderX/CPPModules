/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:22:42 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/04 16:23:46 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string n);
		HumanB(const HumanB &other);
		~HumanB();

		HumanB &operator=(const HumanB &other);

		void attack();
		void setWeapon(Weapon &w);
		void setName(std::string n);

		std::string getName();
		Weapon &getWeapon();
};

#endif