#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target,"Shrubbery Form", 145, 137)
{}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj): Form(obj)
{}
ShrubberyCreationForm &ShrubberyCreationForm::operator= (ShrubberyCreationForm const &obj)
{
	if (this == &obj)
		return *this;
	return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::execute(const Bureaucrat &obj) const
{
	if (!getIsSign())
		throw FormAlreadySignException();
	else if (obj.getGrade() > getGradeFormExec())
		throw GradeTooLowException();
	
	std::ofstream newFile;
	newFile.open(getTarget()+ "_shrubbery");
	
		newFile <<"               ,@@@@@@@,             "<< std::endl <<
				"       ,,,.   ,@@@@@@/@@,@@ .oo8888o.     "<< std::endl <<
				"    ,&&%&%&%,@@@@@/@@@@@@,8888\\88/8o   "<< std::endl <<
				"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88 "<< std::endl <<
				"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888  "<< std::endl <<
				"   %&&%/ %&%&&@@\\ \\V /@@' `88\\8 `/88 "<< std::endl <<
				"   `&%\\ ` /%&'    |.|        \\ '|8'    "<< std::endl <<	
				"       |o|        | |         | |        "<< std::endl <<
				"       |.|        | |         | |        "<< std::endl <<
				"    \\/ ._\\///__/  ,\\_//_\\/.  \\_//_"<< std::endl;
		newFile.close();

}
