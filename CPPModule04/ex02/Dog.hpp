/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:29:17 by migarci2          #+#    #+#             */
/*   Updated: 2024/02/08 15:00:42 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	
	public:
		Dog();
		Dog(const Dog &copy);
		virtual ~Dog();

		Dog &operator=(const Dog &copy);
		
		void makeSound() const;
};