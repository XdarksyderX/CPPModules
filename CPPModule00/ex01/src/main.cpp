/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:10:20 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/06 11:26:37 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cctype>

#include "PhoneBook.hpp"

#define ADD "ADD"
#define SEARCH "SEARCH"
#define EXIT "EXIT"

bool isValidPhoneNumber(std::string &phoneNumber)
{
	for (size_t i = 0; i < phoneNumber.length(); i++)
	{
		if (!std::isdigit(phoneNumber[i]))
			return false;
	}
	return true;
}

void displayContact(Contact &contact)
{
    std::cout << " | " << std::left << std::setw(10) << contact.getFirstName();
    std::cout << " | " << std::left << std::setw(10) << contact.getLastName();
    std::cout << " | " << std::left << std::setw(10) << contact.getNickName();
    std::cout << " | " << std::left << std::setw(15) << contact.getPhoneNumber();
	std::cout << " | " << std::left << std::setw(10) << contact.getDarkestSecret();
}

void displayContacts(PhoneBook &phoneBook)
{
    std::cout << std::left << std::setw(10) << "Index"
              << " | " << std::setw(10) << "First Name"
              << " | " << std::setw(10) << "Last Name"
              << " | " << std::setw(10) << "Nick Name"
              << " | " << std::setw(15) << "Phone Number"
			  << " | " << std::setw(10) << "Darkest Secret";
    std::cout << std::endl;
	std::cout << std::setfill('-') << std::setw(90) << "-" << std::setfill(' ') << std::endl;
    std::cout << std::setfill(' ');

    for (int i = 0; i < phoneBook.getContactCount(); i++)
    {
        std::cout << std::left << std::setw(10) << i;
        displayContact(phoneBook.getContact(i));
        std::cout << std::endl;
    }
}

void Add(PhoneBook &phoneBook)
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "Enter first name: ";
	std::getline(std::cin, firstName);
	std::cout << "Enter last name: ";
	std::getline(std::cin, lastName);
	std::cout << "Enter nick name: ";
	std::getline(std::cin, nickName);
	do
	{
		std::cout << "Enter a valid phone number: ";
		std::getline(std::cin, phoneNumber);
	} while (!isValidPhoneNumber(phoneNumber));
	std::cout << "Enter your darkest secret: ";
	std::getline(std::cin, darkestSecret);

	Contact contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	phoneBook.addContact(contact);
}

void Search(PhoneBook &phoneBook)
{
	displayContacts(phoneBook);
	std::cout << std::endl;
	int index;
	std::cout << "Enter index: ";
	std::cin >> index;
	if (index < phoneBook.getContactCount())
	{
		Contact contact = phoneBook.getContact(index);
		std::cout << "First Name: " << contact.getFirstName() << std::endl;
		std::cout << "Last Name: " << contact.getLastName() << std::endl;
		std::cout << "Nick Name: " << contact.getNickName() << std::endl;
		std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}

void getSelection(std::string &selection)
{
    do {
        std::cout << "Enter selection (EXIT, ADD, SEARCH): ";
        std::getline(std::cin, selection);
    } while (selection != EXIT && selection != ADD && selection != SEARCH);
}

int main()
{
	std::string selection;
	PhoneBook	phoneBook;
	do
	{
		getSelection(selection);
		if (selection == ADD)
			Add(phoneBook);
		if (selection == SEARCH)
			Search(phoneBook);
	} while (selection != "EXIT");
}
