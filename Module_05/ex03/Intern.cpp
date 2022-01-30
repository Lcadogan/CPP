#include "Intern.hpp"

Form *createPresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *createRobotomy(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *createShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (name_func[i] == name)
		{
			std::cout << "Intern creates <" << name << ">" << std::endl;
			return (arrFuncts[i](target));
		}
	}
	std::cout << "Error! This form type was not found!" << std::endl;
	return (nullptr);
}

Intern::Intern()
{
	name_func[0] = "presidential pardon";
	name_func[1] = "robotomy request";
	name_func[2] = "shrubbery creation";
	arrFuncts[0] = &createPresident;
	arrFuncts[1] = &createRobotomy;
	arrFuncts[2] = &createShrubbery;
}

Intern::Intern(const Intern &obj)
{
	*this = obj;
}

Intern& Intern::operator= (const Intern &obj)
{
	(void)obj;
	return (*this);
}

Intern::~Intern()
{}