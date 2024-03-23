/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 23:03:13 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/23 23:18:09 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstddef>

template <typename T>
class Array
{
	private:
		T *array;
		size_t length;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &a);
		~Array();

		Array &operator=(const Array &a);
		T &operator[](unsigned int index);
		int size() const;

};

# include "Array.tpp"

#endif
