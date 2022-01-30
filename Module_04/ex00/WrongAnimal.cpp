#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout<<"WrongAnimal constructor called"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout<<"WrongAnimal copy constructor called"<<std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	type = other.type;
	std::cout<<"Assigned operator called"<<std::endl;
	return(*this);
}
WrongAnimal::~WrongAnimal()
{
	std::cout<<"WrongAnimal destructor called"<<std::endl;
};
const std::string& WrongAnimal::getType(void) const
{
	return(type);
}
void WrongAnimal::makeSound(void) const
{
	std::cout<<"This is WrongAnimal sound"<<std::endl;
}