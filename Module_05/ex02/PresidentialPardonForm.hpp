#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm: public Form
{
private:
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &obj);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
	void execute(Bureaucrat const &executor) const;
	~PresidentialPardonForm();

};

#endif // !Presid