# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/23 18:17:54 by migarci2          #+#    #+#              #
#    Updated: 2024/03/23 18:17:55 by migarci2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: serialize

serialize: main.o Serializer.o
	$(CXX) $(CXXFLAGS) $^ -o $@

main.o: main.cpp Serializer.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

ScalarConverter.o: Serializer.cpp Serializer.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f main.o Serializer.o

fclean: clean
	rm -f serialize