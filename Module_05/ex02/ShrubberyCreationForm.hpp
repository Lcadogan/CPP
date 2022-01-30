#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm: public Form
{
private:

	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &obj);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &obj);
	void execute(const Bureaucrat &obj) const;
	~ShrubberyCreationForm();
};

#endif // !SHRUBBERYCREATIONFORM_HPP

