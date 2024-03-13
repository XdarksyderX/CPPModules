/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:42:04 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/13 16:51:21 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string t);
		PresidentialPardonForm(const PresidentialPardonForm &pPF);

		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(const PresidentialPardonForm &pPF);

		void execute(const Bureaucrat& executor) const;
};

#endif
