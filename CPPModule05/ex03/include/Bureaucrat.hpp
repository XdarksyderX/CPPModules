/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:18:53 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/13 18:30:15 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;

		void	setGrade(int g);

	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &b);
		Bureaucrat(int g);
		Bureaucrat(const std::string n);
		Bureaucrat(const std::string n, int g);

		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &b);

		std::string getName() const;
		int	getGrade() const;

		void	incrementGrade();
		void	decrementGrade();

		void	signForm(AForm &f);
		void	executeForm(AForm &f);

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

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &b);

#endif
