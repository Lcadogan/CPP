#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<"Brain constructor called"<<std::endl;
}
Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout<<"Brain copy constructor called"<<std::endl;
}
Brain& Brain::operator=(const Brain &other)
{
	std::cout<<"The Brain assignment operator is called"<<std::endl;
	for (int i = 0; i < numOfideas; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
	return(*this);
}
Brain::~Brain()
{
	std::cout<<"Brain destructor called"<<std::endl;
}