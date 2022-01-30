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

    return (0);
}