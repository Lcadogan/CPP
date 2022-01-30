#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

# define INVENTORY_SIZE 4

class Character: public ICharacter
{
private:
	std::string name;
	AMateria *inventory[INVENTORY_SIZE];
public:
	Character();
	Character(const Character & other);
	Character(const std::string name);
	Character& operator=(const Character &other);
 	virtual~Character();

	 std::string const & getName() const;
	 void equip(AMateria* m);
	 void unequip(int idx);
	 void use(int idx, ICharacter& target);

};

#endif // !CHARACTER_HPP
