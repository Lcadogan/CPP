#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *inventory[INVENTORY_SIZE];
	std::string name_type[INVENTORY_SIZE];
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &other);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const &type);
};

#endif

