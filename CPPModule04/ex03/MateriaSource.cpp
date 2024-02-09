/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:52:21 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/10 00:24:59 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : materiasCount(0)
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	materiasCount = copy.materiasCount;
	for (int i = 0; i < 4; i++)
		materias[i] = copy.materias[i];
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i])
			delete materias[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	if (this == &copy)
		return (*this);
	materiasCount = copy.materiasCount;
	for (int i = 0; i < 4; i++)
		materias[i] = copy.materias[i];
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (materiasCount < 4)
	{
		materias[materiasCount] = materia;
		materiasCount++;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] && materias[i]->getType() == type)
			return materias[i]->clone();
	}
	return (NULL);
}