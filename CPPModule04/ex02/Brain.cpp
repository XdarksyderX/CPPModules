/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:56:56 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/08 14:58:29 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
	return (*this);
}

std::string Brain::getIdea(int i) const
{
	return (ideas[i]);
}

void Brain::setIdea(int i, std::string idea)
{
	ideas[i] = idea;
}
