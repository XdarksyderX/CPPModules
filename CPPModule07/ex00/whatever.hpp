/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 22:01:17 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/23 22:01:18 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP

template <typename T>
void swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}

template <typename T>
T min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}

#endif