CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: base

base: main.o Base.o
	$(CXX) $(CXXFLAGS) $^ -o $@

main.o: main.cpp Base.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

Base.o: Base.cpp Base.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f main.o Base.o

fclean: clean
	rm -f base