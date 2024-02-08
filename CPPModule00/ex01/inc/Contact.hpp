/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:10:30 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/06 11:23:55 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;

	public:
		Contact();
		Contact(std::string &fN, std::string &lN, std::string &nN, std::string &pN, std::string &dS);
		~Contact();

		void	setFirstName(std::string &firstName);
		void	setLastName(std::string &lastName);
		void	setNickName(std::string &nickName);
		void	setPhoneNumber(std::string &phoneNumber);
		void	setDarkestSecret(std::string &darkestSecret);

		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickName() const;
		std::string	getPhoneNumber() const;
		std::string	getDarkestSecret() const;

};

#endif