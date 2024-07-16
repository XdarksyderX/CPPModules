# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/27 11:45:53 by migarci2          #+#    #+#              #
#    Updated: 2024/04/17 21:01:59 by migarci2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

INCLUDE_DIR = include

all: span

span: main.o Span.o
	$(CXX) $(CXXFLAGS) -o span main.o Span.o

main.o: src/main.cpp
	$(CXX) $(CXXFLAGS) -I $(INCLUDE_DIR) -c src/main.cpp

Span.o: src/Span.cpp
	$(CXX) $(CXXFLAGS) -I $(INCLUDE_DIR) -c src/Span.cpp

clean:
	rm -f main.o Span.o

fclean: clean
	rm -f span

re: fclean all

.PHONY: all clean fclean re
