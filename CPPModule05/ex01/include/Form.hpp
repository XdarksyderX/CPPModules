/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 23:25:14 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/13 16:15:49 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				isSigned;
		int					requiredGradeToSign;
		int					requiredGradeToExec;

	public:
		Form();
		Form(std::string name, bool isSigned, int requiredGradeToSign, int requiredGradeToExec);
		Form(std::string name, int requiredGradeToSign, int requiredGradeToExec);
		Form(const Form &f);

		~Form();

		Form 		&operator=(const Form &f);

		std::string getName() const;
		bool		getIsSigned() const;
		int			getRequiredGradeToSign() const;
		int			getRequiredGradeToExec() const;

		void		setRequiredGradeToSign(int g);
		void		setRequiredGradeToExec(int g);

		void		beSigned(const Bureaucrat &b);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, const Form &f);

#endif
