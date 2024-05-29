/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:00:16 by migarci2          #+#    #+#             */
/*   Updated: 2024/04/21 19:35:50 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <string>
# include <fstream>
# include <sstream>
# include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, double> exchangeRate;

	public:
		BitcoinExchange(const std::string &fileName);
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange();

		double getExchangeRate(const std::string &date) const;
		
};

#endif