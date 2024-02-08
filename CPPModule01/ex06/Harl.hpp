/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:38:49 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/06 12:38:50 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl {

	public:
		Harl();
		~Harl();

		void complain(const std::string level);

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

};

#endif