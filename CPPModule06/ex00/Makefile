# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/23 18:17:42 by migarci2          #+#    #+#              #
#    Updated: 2024/03/23 18:17:43 by migarci2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: convert

convert: main.o ScalarConverter.o
	$(CXX) $(CXXFLAGS) $^ -o $@

main.o: main.cpp ScalarConverter.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

ScalarConverter.o: ScalarConverter.cpp ScalarConverter.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f main.o ScalarConverter.o

fclean: clean
	rm -f convert