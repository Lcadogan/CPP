#include "Character.hpp"

Character::Character()
{
	for(int i = 0; i < INVENTORY_SIZE; i++)
	{
		this->inventory[i] = 0;
	}
}
Character::~Character() {}

Character::Character(std::string const name): name(name) {}

Character::Character(const Character & other)
{
	*this = other;
}

Character& Character::operator=(const Character &other)
{
	if (this != &other)
	{
		Character::~Character();
		for(int i = 0; i < INVENTORY_SIZE; i++)
			this->inventory[i] = other.inventory[i]->clone();
	}
	return *this;
}
std::string const & Character::getName() const
{
	return(this->name);
}

void Character::equip(AMateria* m)
{
	int i = -1;
	if (!m)
		return;
	while(++i < INVENTORY_SIZE)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			break;
		}
	}
}
void Character::unequip(int idx)
{
	this->inventory[idx] = 0;
}
void Character::use(int idx, ICharacter & target)
{
	if (!this->inventory[idx])
		return;
	this->inventory[idx]->use(target);
}