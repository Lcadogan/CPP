#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target): Form(target,"Robotomy Form", 72, 45)
{}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm  &obj): Form(obj)
{}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	if (this == &obj)
		return(*this);
	return(*this);
}
RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute(const Bureaucrat &obj) const
{
	std::string dr_noises = "DZZzzzzzzz(drilling noises)...";
	
	if (!getIsSign())
		throw FormAlreadySignException();
	else if (obj.getGrade() > getGradeFormExec())
		throw GradeTooLowException();
	srand(time(0));
	if (rand() % 2)
		std::cout << dr_noises << " <" << getTarget()
		<< "> has been robotomized successfully" << std::endl;
	else
		std::cout << dr_noises << " robotomized FAIL" << std::endl;
}