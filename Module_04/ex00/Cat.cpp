#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout<<"Cat constructor called"<<std::endl;
}
Cat::Cat(const Cat &other)
{
	*this = other;
	std::cout<<"Cat copy constructor called"<<std::endl;
}
Cat& Cat::operator=(const Cat &other)
{
	type = other.type;
	std::cout<<"Assigned operator called"<<std::endl;
	return(*this);
}
Cat::~Cat()
{
	std::cout<<"Cat destructor called"<<std::endl;
}
void Cat::makeSound(void) const
{
	std::cout<<"This is Cat sound"<<std::endl;
}