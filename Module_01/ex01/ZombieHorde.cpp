#include "Zombie.hpp"

Zombie* zombieHorde(int N,std::string name){
	Zombie *arr = new Zombie[N];
	for(int i = 0; i < N; i++){
		arr[i].setName(name + std::to_string(i + 1));
	}
	return(arr);
}