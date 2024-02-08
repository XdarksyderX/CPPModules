/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:10:28 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/06 11:23:05 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	contactCount = 0;
}

PhoneBook::~PhoneBook()
{
}

int PhoneBook::getContactCount() const
{
	return contactCount;
}

Contact& PhoneBook::getContact(int index)
{
	return contacts[index];
}

void	PhoneBook::deleteContact(int index)
{
	if (index < contactCount)
	{
		for (int i = index; i < contactCount - 1; i++)
		{
			contacts[i] = contacts[i + 1];
		}
		contactCount--;
	}
}

void	PhoneBook::addContact(Contact &contact)
{
	if (contactCount < 8)
	{
		contacts[contactCount] = contact;
		contactCount++;
	}
	else if (contactCount == 8)
	{
		for (int i = 0; i < 7; i++)
			contacts[i] = contacts[i + 1];
		contacts[7] = contact;
	}
}