/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:10:25 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/06 11:18:34 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(std::string &fN, std::string &lN, std::string &nN, std::string &pN, std::string &dS)
{
	firstName = fN;
	lastName = lN;
	nickName = nN;
	phoneNumber = pN;
	darkestSecret = dS;
}

Contact::~Contact()
{
}

void	Contact::setFirstName(std::string &firstName)
{
	this->firstName = firstName;
}

void	Contact::setLastName(std::string &lastName)
{
	this->lastName = lastName;
}

void	Contact::setNickName(std::string &nickName)
{
	this->nickName = nickName;
}

void	Contact::setPhoneNumber(std::string &phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string &darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName() const
{
	return firstName;
}

std::string	Contact::getLastName() const
{
	return lastName;
}

std::string	Contact::getNickName() const
{
	return nickName;
}

std::string	Contact::getPhoneNumber() const
{
	return phoneNumber;
}

std::string	Contact::getDarkestSecret() const
{
	return darkestSecret;
}
