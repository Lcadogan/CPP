#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		static const int numOfideas = 100;
	public:
		Brain();
		Brain(const Brain &other);
		Brain& operator=(const Brain &other);

		virtual~Brain();

		std::string ideas[Brain::numOfideas];
};

#endif // !BRAIN_HPP
