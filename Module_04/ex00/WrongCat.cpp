#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout<<"WrongCat constructor called"<<std::endl;
}
WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
	std::cout<<"WrongCat copy constructor called"<<std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat &other)
{
	type = other.type;
	std::cout<<"Assigned operator called"<<std::endl;
	return(*this);
}
WrongCat::~WrongCat()
{
	std::cout<<"WrongCat destructor called"<<std::endl;
}
void WrongCat::makeSound(void) const
{
	std::cout<<"This is WrongCat sound"<<std::endl;
}