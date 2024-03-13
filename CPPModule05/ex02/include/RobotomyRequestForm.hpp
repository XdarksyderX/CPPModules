/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:02:05 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/13 17:11:26 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include <cstdlib>
# include <ctime>

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string t);
		RobotomyRequestForm(const RobotomyRequestForm &rRF);

		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(const RobotomyRequestForm &rRF);

		void execute(const Bureaucrat& executor) const;
};

#endif
