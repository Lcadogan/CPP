#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &other);
		Animal& operator=(const Animal &other);
		virtual~Animal();

		const std::string& getType(void) const;
		virtual void makeSound(void) const;
		virtual Brain *getBrain(void) const = 0;
		virtual void voiceIdeas(void) const = 0;
};

#endif //Animal