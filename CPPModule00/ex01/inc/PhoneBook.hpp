/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:10:32 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/06 11:22:22 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact		contacts[8];
		int			contactCount;
	public:
		PhoneBook();
		~PhoneBook();

		int			getContactCount() const;
		Contact&	getContact(int index);

		void		deleteContact(int index);
		void		addContact(Contact &contact);
};

#endif