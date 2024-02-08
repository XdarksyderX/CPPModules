#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("Paco The Real One");
	zombie->announce();
	randomChump("Paco The Fake One");
	delete zombie;
	return 0;
}