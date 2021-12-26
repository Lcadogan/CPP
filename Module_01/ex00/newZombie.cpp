#include "Zombie.hpp"

Zombie* newZombie(std::string name){
	Zombie *ptr_new_zomb;
	ptr_new_zomb = new Zombie(name);
	return (ptr_new_zomb);
}
