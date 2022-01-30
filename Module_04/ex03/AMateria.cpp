#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::~AMateria() {}

AMateria::AMateria(const std::string &type)
{
	this->type = type;
}
AMateria & AMateria::operator=(const AMateria &other)
{
	if(this != &other)
		this->type = other.type;
	return *this;
}
std::string const & AMateria::getType() const
{
	return (this->type);
}
