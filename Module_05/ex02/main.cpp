#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat burr_top = Bureaucrat("Valera_1", 1);
		Bureaucrat burr_down = Bureaucrat("Gosha_150", 150);
		
		PresidentialPardonForm form_pres = PresidentialPardonForm("Vova");
		ShrubberyCreationForm form_shrub = ShrubberyCreationForm("Home");
		std::cout<<std::endl<<std::endl;
		std::cout<<std::string(10,' ')<<"* Test OK *"<<std::endl<<std::endl;
		burr_top.signForm(form_pres);
		form_pres.execute(burr_top);
		burr_top.executeForm(form_pres);
		std::cout<<std::endl<<std::endl;
		std::cout<<std::string(10,' ')<<"* Test_Not_OK(exec_bureaucrat_not_sign) *"<<std::endl<<std::endl;
		burr_down.executeForm(form_shrub);
		std::cout<<std::endl<<std::endl;
		std::cout<<std::string(10,' ')<<"* Test_Not_OK(exec_bureaucrat_low_grade) *"<<std::endl<<std::endl;
		burr_top.signForm(form_shrub);
		burr_down.executeForm(form_shrub);
		std::cout<<std::endl<<std::endl;
		std::cout<<std::string(10,' ')<<"* Test_Not_OK(exec_form_low_grade) *"<<std::endl<<std::endl;
		form_shrub.execute(burr_down);
		////Exception
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout<<std::endl<<std::endl;
	std::cout<<std::string(10,' ')<<"******* Test form exeption *******"<<std::endl;
	try
	{
		Bureaucrat bur_45 = Bureaucrat("George", 45);
		ShrubberyCreationForm form_shrub = ShrubberyCreationForm("Home");
		RobotomyRequestForm form_robot = RobotomyRequestForm("2DFL");

		std::cout<<std::endl<<std::endl;
		std::cout<<std::string(10,' ')<< "* Test_EXECUTE_Shrubbery *" << std::endl<<std::endl;
		bur_45.signForm(form_shrub);
		bur_45.executeForm(form_shrub);
		std::cout << form_shrub << std::endl;
		std::cout<<std::endl<<std::endl;
		std::cout<<std::string(10,' ')<< "* Test_EXECUTE_Robotomy *" << std::endl<<std::endl;
		bur_45.signForm(form_robot);
		bur_45.executeForm(form_robot);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}