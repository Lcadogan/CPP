#ifndef HUMAN_A_H
#define HUMAN_A_H

#include "Weapon.hpp"

class HumanA {
private:
	std::string _name;
	Weapon &_weapon;

public:
	HumanA(std::string const &name, Weapon &_weapon);
	~HumanA();
	void attack();
};

#endif