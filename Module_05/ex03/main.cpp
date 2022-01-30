#include <string>
#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		Bureaucrat burr_top = Bureaucrat("Valera_1", 1);
		Bureaucrat burr_dno = Bureaucrat("Vladimir_150", 150);
		
		Form* rrf;
		Form* scf;
		Form* ppf;
		Form* err;

		std::cout<<std::endl<<std::endl;
		std::cout<<std::string(10,' ')<<"* Intern Creates Form *"<<std::endl<<std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		scf = someRandomIntern.makeForm("shrubbery creation", "new_file");
		ppf = someRandomIntern.makeForm("presidential pardon", "Vova");
		err = someRandomIntern.makeForm("something", "something");

		std::cout<<std::endl<<std::endl;
		std::cout<<std::string(10,' ')<<"* Tests *"<<std::endl<<std::endl;
		burr_top.signForm(*rrf);
		burr_top.executeForm(*scf);
		burr_top.signForm(*rrf);
		burr_top.signForm(*scf);
		burr_top.signForm(*ppf);
		burr_top.executeForm(*rrf);
		burr_top.executeForm(*scf);
		burr_top.executeForm(*ppf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}