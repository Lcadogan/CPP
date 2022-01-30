#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(target, "Presidential Pardon Form", 25, 5) 
{}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj): Form(obj)
{}
void PresidentialPardonForm::execute(const Bureaucrat &obj) const
{
	if (!getIsSign())
		throw FormAlreadySignException();
	else if (obj.getGrade() > getGradeFormExec())
		throw GradeTooLowException();
	std::cout << "<" << getTarget() << " > has been pardoned by Zafod Beeblebrox"
	<< std::endl;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	if (this == &obj)
		return(*this);
	return(*this);
}
PresidentialPardonForm::~PresidentialPardonForm()
{}

