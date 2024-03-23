/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:17:37 by migarci2          #+#    #+#             */
/*   Updated: 2024/03/23 18:29:25 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

typedef unsigned long long uintptr_t;

struct Data
{
	int param1;
	int param2;
};

class Serializer
{
	public:
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);

	private:
		Serializer();
		Serializer(const Serializer &s);
		~Serializer();
		Serializer &operator=(const Serializer& s);
};

#endif