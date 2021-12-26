#include "HumanB.hpp"

HumanB::~HumanB(){
	;
}

HumanB::HumanB(std::string const &name){
	this->name = name;
}

void HumanB::attack(){
	if(this->weapon)
		std::cout<<this->name<<" attacks with his"<<this->weapon->getType()<<std::endl;
	else
		std::cout<<this->name<<"have not weapon"<<std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}