/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:27:35 by migarci2          #+#    #+#             */
/*   Updated: 2024/05/29 19:44:50 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <sstream>
# include <string>
# include <exception>

class RPN
{
	private:
		std::stack<double> stack;
		double result;
		void	add();
		void	sub();
		void	mul();
		void	div();

	public:
		RPN(const std::string &expression);
		RPN(const RPN &other);
		RPN &operator=(const RPN &other);
		~RPN();

		void	push(double value);
		double	getResult() const;
		class RPNException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif
