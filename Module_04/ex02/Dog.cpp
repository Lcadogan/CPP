#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain;
	std::cout<<"Dog constructor called"<<std::endl;
}
Dog::Dog(const Dog &other)
{
	this->type = other.type;
	*this = other;
	std::cout<<"Dog copy constructor called"<<std::endl;
}
Dog& Dog::operator=(const Dog &other)
{
	if (this == &other)
		return *this;
	type = other.type;
	if (!this->brain)
		this->brain = new Brain;
	*this->brain = *other.brain;
	std::cout<<"Assigned operator "<< other.type <<" called"<<std::endl;
	return(*this);
}
Dog::~Dog()
{
	delete brain;
	std::cout<<"Dog destructor called"<<std::endl;
};
void Dog::makeSound(void) const
{
	std::cout<<"This is Dog sound"<<std::endl;
}
Brain* Dog::getBrain(void) const
{
	return(this->brain);
}

void Dog::voiceIdeas(void) const
{
	for(int i = 0; i < 3; i++)
	{
		if (brain->ideas[i] != "")
			std::cout<<brain->ideas[i]<<std::endl;
	}
}

void Dog::setIdea(int numIdea, std::string Idea)
{
	brain->ideas[numIdea] = Idea;
}
