/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:02:11 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/10 00:05:09 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Character")
{
};

Character::Character(std::string name) : name(name)
{
};

Character::Character(const Character &copy) : name(copy.name)
{
};

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i])
			delete materias[i];
	}
};

Character &Character::operator=(const Character &copy)
{
	if (this == &copy)
		return (*this);
	name = copy.name;
	return (*this);
}

std::string const &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *m)
{
	if (count < 4)
	{
		materias[count] = m;
		count++;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !materias[idx])
        return;
    materias[idx] = NULL;
    for (int i = idx; i < 3; i++)
        materias[i] = materias[i + 1];
    materias[3] = NULL;
    count--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || !materias[idx])
		return;
	materias[idx]->use(target);
}
