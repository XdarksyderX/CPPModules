/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 21:03:35 by migarci2          #+#    #+#             */
/*   Updated: 2024/04/17 21:15:30 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T>>
{
	public:
		MutantStack() {};
		MutantStack(const MutantStack &m) : std::stack<T, std::deque<T>>(m) {};
		~MutantStack() {};

		MutantStack &operator=(const MutantStack &m)
		{
			if (this != &m)
				std::stack<T, std::deque<T>>::operator=(m);
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin()
		{
			return (std::stack<T, std::deque<T>>::c.begin());
		}

		iterator end()
		{
			return (std::stack<T, std::deque<T>>::c.end());
		}
};

#endif
