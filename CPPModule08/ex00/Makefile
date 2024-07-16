# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/27 11:45:53 by migarci2          #+#    #+#              #
#    Updated: 2024/03/27 12:04:20 by migarci2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

INCLUDE_DIR = include

all: buscar

buscar: main.o
	$(CXX) $(CXXFLAGS) -o buscar main.o

main.o: src/main.cpp
	$(CXX) $(CXXFLAGS) -I $(INCLUDE_DIR) -c src/main.cpp

clean:
	rm -f main.o

fclean: clean
	rm -f buscar

re: fclean all

.PHONY: all clean fclean re
