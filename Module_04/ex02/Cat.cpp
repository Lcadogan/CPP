#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain;
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
	*(this->brain) = *(other.brain);
	std::cout<<"Assigned operator"<< other.type <<" called"<<std::endl;
	return(*this);
}
Cat::~Cat()
{
	delete brain;
	std::cout<<"Cat destructor called"<<std::endl;
}
void Cat::makeSound(void) const
{
	std::cout<<"This is Cat sound"<<std::endl;
}
Brain* Cat::getBrain(void) const
{
	return(this->brain);
}
void Cat::voiceIdeas(void) const
{
	for(int i = 0; i < 3; i++)
	{
		if (brain->ideas[i] != "")
			std::cout<<brain->ideas[i]<<std::endl;
	}
}