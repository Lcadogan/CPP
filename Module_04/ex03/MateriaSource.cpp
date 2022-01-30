#include "MateriaSource.hpp"
#include "Character.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < INVENTORY_SIZE; i++)
		this->inventory[i] = 0;
}
MateriaSource::~MateriaSource()
{
	for(int i = 0; i < INVENTORY_SIZE; i++)
		delete this->inventory[i];
}
MateriaSource::MateriaSource(const MateriaSource & other)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		this->inventory[i] = other.inventory[i]->clone();
}

MateriaSource & MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		MateriaSource::~MateriaSource();
		for (int i = 0; i < INVENTORY_SIZE; i++)
			this->inventory[i] = other.inventory[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = -1;
	while (++i < INVENTORY_SIZE)
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			this->name_type[i] = m->getType();
			break;
		}
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (this->inventory[i] && this->name_type[i] == type)
			return this->inventory[i]->clone();
	}
	return 0;
}
