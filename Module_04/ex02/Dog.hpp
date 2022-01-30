#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &other);
		Dog(std::string name);
		Dog& operator=(const Dog &other);
		virtual~Dog();
		
		void makeSound(void) const;
		Brain *getBrain(void) const;
		void voiceIdeas(void) const;
		void setIdea(int numIdea, std::string Idea);
};

#endif // !DOG_HPP