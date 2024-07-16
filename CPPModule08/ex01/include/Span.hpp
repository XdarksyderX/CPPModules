/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:08:31 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/27 13:09:07 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iterator>
# include <vector>
# include <algorithm>
# include <exception>
# include <climits>

class Span
{
	private:
		size_t max;
		std::vector<int> vector;
	public:
		Span(size_t n);
		Span(const Span &s);

		~Span();

		Span &operator=(const Span &s);

		void addNumber(int n);

		size_t shortestSpan();
		size_t longestSpan();

		class SpanIsFullException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class SpanTooSmallException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif
