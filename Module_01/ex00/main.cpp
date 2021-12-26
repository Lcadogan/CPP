#include "Zombie.hpp"

int main() {
	Zombie *ptr_zombie = newZombie("Bob");
	ptr_zombie->announce();
	randomChump("Jim");
	delete ptr_zombie;
	return(0);
}
