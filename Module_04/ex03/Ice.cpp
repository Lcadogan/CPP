#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
}

Ice::Ice(std::string const type)
{
	this->type = type;
}

Ice::Ice(Ice const &other): AMateria(other) {}

Ice & Ice::operator=(const Ice &other)
{
	AMateria::operator=(other);
	return(*this);
}

Ice::~Ice(){}

AMateria* Ice::clone() const
{
	Ice *ptr_type_materia = new Ice(*this);
	return (ptr_type_materia);
}
void Ice::use(ICharacter& target)
{
	std::cout<<  "* shoots an ice bolt at "<<target.getName()<< " *"<<std::endl;
}