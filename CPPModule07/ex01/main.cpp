#include "iter.hpp"

#include <iostream>

void	print_mod_2(const int &n)
{
	std::cout << n % 2;
}

void	print_to_upper(const char &c)
{
	std::cout << static_cast<char>(toupper(c));
}

int main()
{
	int mis_enteros[5] = {42, 42, 24, 24};
	char mi_cadena[] = "Hola pacoflower";
	iter(mis_enteros, 5, print_mod_2);
	std::cout << std::endl;
	iter(mi_cadena, 15, print_to_upper);
	std::cout << std::endl;
}