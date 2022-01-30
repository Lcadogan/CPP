#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

typedef Form *(*func_name)(std::string);

class Intern
{
public:
	Intern();
	Intern(Intern const &copy);
	Intern& operator= (Intern const &assign);
	~Intern();
	
	Form *makeForm(std::string name, std::string target);
	
private:
	std::string name_func[3];
	func_name arrFuncts[3];
};

#endif
