#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout<<"Animal constructor called"<<std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout<<"Animal copy constructor called"<<std::endl;
}
Animal& Animal::operator=(const Animal &other)
{
	type = other.type;
	std::cout<<"Assigned operator called"<<std::endl;
	return(*this);
}
Animal::~Animal()
{
	std::cout<<"Animal destructor called"<<std::endl;
};
const std::string& Animal::getType(void) const
{
	return(type);
}
