# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/27 11:45:53 by migarci2          #+#    #+#              #
#    Updated: 2024/04/17 21:19:51 by migarci2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

INCLUDE_DIR = include

all: mutant_stack

mutant_stack: main.o
	$(CXX) $(CXXFLAGS) -o span main.o Span.o

main.o: src/main.cpp
	$(CXX) $(CXXFLAGS) -I $(INCLUDE_DIR) -c src/main.cpp

clean:
	rm -f main.o

fclean: clean
	rm -f mutant_stack

re: fclean all

.PHONY: all clean fclean re
