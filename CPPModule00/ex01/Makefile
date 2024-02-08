CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = awesome_phonebook
SRC = src/main.cpp src/Contact.cpp src/PhoneBook.cpp
INC = -Iinc/
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(INC) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
