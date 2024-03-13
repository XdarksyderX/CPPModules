/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 23:25:14 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/13 21:22:10 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		bool				isSigned;
		int					requiredGradeToSign;
		int					requiredGradeToExec;

	public:
		AForm();
		AForm(std::string name, bool isSigned, int requiredGradeToSign, int requiredGradeToExec);
		AForm(std::string name, int requiredGradeToSign, int requiredGradeToExec);
		AForm(const AForm &f);

		virtual ~AForm();

		AForm 			&operator=(const AForm &f);

		std::string 	getName() const;
		bool			getIsSigned() const;
		int				getRequiredGradeToSign() const;
		int				getRequiredGradeToExec() const;

		void			setRequiredGradeToSign(int g);
		void			setRequiredGradeToExec(int g);

		void			beSigned(const Bureaucrat &b);

		virtual void	execute(const Bureaucrat &executor) const = 0;

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

		class NotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, const AForm &f);

#endif
