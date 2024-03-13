# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 21:19:53 by migarci2          #+#    #+#              #
#    Updated: 2024/03/13 20:52:42 by migarci2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
NAME = bureaucrat

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include

SRCs = $(SRC_DIR)/main.cpp $(SRC_DIR)Bureaucrat.cpp
OBJs = $(OBJ_DIR)/main.o $(OBJ_DIR)/Bureaucrat.o

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJs)
	$(CXX) $(CXXFLAGS) -I $(INC_DIR) $(OBJs) -o $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJs)
	rm -r obj/

fclean: clean
	rm -f $(NAME)

re: fclean all
