#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm: public Form
{
private:
	RobotomyRequestForm();
public:
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &obj);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &obj);
	void execute(Bureaucrat const &executor) const;
	~RobotomyRequestForm();

};

#endif // !ROBOTOMYREQUESTFORM_CPP
