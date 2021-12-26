#include "HumanA.hpp"

HumanA::~HumanA(){
	;
}

HumanA::HumanA(std::string const & name, Weapon &weapon) : _weapon(weapon){
	this->_name = name;
}

void HumanA::attack(){
	std::cout<<this->_name<<" attacks with his"<<this->_weapon.getType()<<std::endl;
}