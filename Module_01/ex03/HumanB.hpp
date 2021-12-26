#ifndef HUMAN_B_H
#define HUMAN_B_H

#include "Weapon.hpp"

class HumanB {
private:
	std::string name;
	Weapon *weapon;
public:
	HumanB(std::string const &name);
	~HumanB();

	void attack();
	void setWeapon(Weapon &Weapon);
};

#endif