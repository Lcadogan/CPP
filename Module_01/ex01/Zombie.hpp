#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

 class Zombie{
	private:
		std::string name;

	public:
		Zombie();
		Zombie(std::string);
		~Zombie();

		void announce(void);
		void setName(std::string name);
		std::string getName(void);
 };

 Zombie* zombieHorde(int N,std::string name);

 #endif