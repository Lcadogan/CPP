#include "Zombie.hpp"

void randomChump(std::string name){
	Zombie n_zom;
	n_zom.setName(name);
	n_zom.announce();
}