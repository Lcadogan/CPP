#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout<<"Dog constructor called"<<std::endl;
}
Dog::Dog(const Dog &other)
{
	*this = other;
	std::cout<<"Dog copy constructor called"<<std::endl;
}
Dog& Dog::operator=(const Dog &other)
{
	type = other.type;
	std::cout<<"Assigned operator called"<<std::endl;
	return(*this);
}
Dog::~Dog()
{
	std::cout<<"Dog destructor called"<<std::endl;
};
void Dog::makeSound(void) const
{
	std::cout<<"This is Dog sound"<<std::endl;
}