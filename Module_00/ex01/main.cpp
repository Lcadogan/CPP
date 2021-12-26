#include "phone_book.hpp"

int main(void)
{
	Phone_book Phone_book;
	bool run;
	std::string command;

	Phone_book.start();
	run = true;
	while (run)
	{
		std::cout<< ">";
		std::getline(std::cin, command);
		transform(command.begin(), command.end(), command.begin(), ::toupper);
		if (command == "ADD")
			Phone_book.add_contact();
		else if (command == "SEARCH")
			Phone_book.search_contact();
		else if (command == "EXIT")
		{
			std::cout<< "Goodbye!)"<<std::endl;
			run = false;
			break;
		}
		if (std::cin.eof())
			return(0);
		Phone_book.request();
	}
	return (0);
}
