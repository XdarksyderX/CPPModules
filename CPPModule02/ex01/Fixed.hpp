/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:04:37 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/07 11:30:45 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int rawBits;
		static const int fractionalBits = 8;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &fixed);
		~Fixed();

		Fixed &operator=(const Fixed &fixed);

		int getRawBits() const;
		void setRawBits(int const raw);
		
		int 	toInt() const;
		float	toFloat() const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif