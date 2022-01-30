#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(const std::string &type)
{
	this->type = type;
}

Cure::Cure(const Cure &other)
{
	*this = other;
}
Cure& Cure::operator=(const Cure &other)
{
	AMateria::operator=(other);
	return (*this);
}

Cure::~Cure() {}

AMateria* Cure::clone() const
{
	Cure *ptr_type_materia = new Cure(*this);
	return (ptr_type_materia);
}

void Cure::use(ICharacter &target)
{
	std::cout<<"* heals "<<target.getName()<<"'s wounds *"<<std::endl;
}
