#include "Zombie.hpp"

int main(void){
	int N = 0;
	std::cout << "How many zombies do you want to create >";
	std::cin >> N;
	Zombie *ptr_zombie;
	ptr_zombie = zombieHorde(N, "Bob");
	for(int i = 0; i < N; i++){
		ptr_zombie[i].announce();
	}
	delete [] ptr_zombie;
	return(0);
}