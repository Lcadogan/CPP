#include "Bureaucrat.hpp"

int main(void)
{
		std::cout<<std::endl<<std::endl;
		std::cout<<std::string(10,' ')<<"* Creating a Bureaucrat with an invalid grade *"<<std::endl<<std::endl;
	try
	{
		Bureaucrat a("Gosha", 50);
		std::cout<< a <<std::endl;
		Bureaucrat b("Vova", 0);
	}
	catch(std::exception& e)
	{
		std::cout<<e.what()<<'\n'<<'\n';
	}
	try
	{
		Bureaucrat a("Gosha", 151);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() <<'\n'<<'\n';
	}
	std::cout<<std::endl<<std::endl;
	std::cout<<std::string(10,' ')<<"* Creating a Bureaucrat and increase or decrease grade *"<<std::endl<<std::endl;
	try
	{
		Bureaucrat b("Vova", 100);
		b.up_Grade(200);
		std::cout<< b <<'\n'<<'\n';

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() <<'\n'<<'\n';
	}
	try
	{
		Bureaucrat a("Gosha", 100);
		a.down_Grade(150);
		std::cout<< a <<'\n'<<'\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() <<'\n'<<'\n';
	}
	std::cout<<std::endl<<std::endl;
	std::cout<<std::string(10,' ')<<"* Creating a Form BB6 *"<<std::endl<<std::endl;

	Form a("BB6", 20, 30);
	std::cout<< a <<std::endl<<std::endl;
	try
	{
		Form b("BB6", 1, 200);
		std::cout<< a <<std::endl<<std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Form c("BB6", 1, 0);
		std::cout<< c <<std::endl<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout<<std::endl<<std::endl;
	std::cout<<std::string(10,' ')<<"* Bureaucrat signs the form BB6 *"<<std::endl<<std::endl;

	Bureaucrat bur("Goga", 1);
	std::cout<< a <<std::endl;
	try
	{
		bur.signForm(a);
		std::cout<< a <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		bur.signForm(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}