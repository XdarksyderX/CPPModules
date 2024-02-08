/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:22:50 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/04 16:22:51 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string t);
		Weapon(const Weapon &other);
		~Weapon();
		Weapon &operator=(Weapon &other);

		const std::string &getType();
		void setType(std::string t);
};


#endif