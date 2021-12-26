#include "Weapon.hpp"

Weapon::Weapon(std::string const &name){
	this->_type = name;
}
Weapon::Weapon(){
}

Weapon::~Weapon(){
	;
}

std::string const & Weapon::getType() const{
	return(this->_type);
}

void Weapon::setType(std::string const &type){
	this->_type = type;
}
