# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 19:07:06 by migarci2          #+#    #+#              #
#    Updated: 2024/05/29 19:23:51 by migarci2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX =  c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = RPN

SRCS = src/RPN.cpp src/main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I include

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
