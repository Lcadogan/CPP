#include "phone_book.hpp"

std::string Contact::fields_name[5] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone number",
	"Darkest Secret"
};

Contact::Contact()
{
	for (int i = First_Name; i <= Darkest_secret; i++)
		this->inf[i] = std::string();
}

Contact::~Contact()
{
}

bool Contact::set_inf(int index)
{
	this->index = index;
	for (int i = First_Name; i < Darkest_secret; i++)
	{
		std::cout << "- " << Contact::fields_name[i] << ":\n>";
		std::getline(std::cin, this->inf[i]);
		std::cout<<"inf ="<<i<<std::endl;
	}
	size_t totalLength = 0;
	for (int i = First_Name; i <= Darkest_secret; i++)
		totalLength += this->inf[i].length();
	if (totalLength == 0)
	{
		std::cout <<std::endl<< "!-- Empty contact not added --!" << std::endl;
		return (false);
	}
	std::cout <<std::endl<< "*-- Contact added ! --*" << std::endl;
	return (true);
}

void Contact::display_header()
{
	std::cout << "|" << std::setw(10) << this->index;
	for (int i = First_Name; i <= NickName; i++)
	{
		std::cout << "|";
		if (this->inf[i].length() > 10)
			std::cout << this->inf[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->inf[i];
	}
	std::cout << "|" << std::endl;
}

void Contact::display(void)
{
	std::cout << "- Contact : [" << this->index << "]" << std::endl;
	for (int i = First_Name; i <= Darkest_secret; i++)
	{
		std::cout <<std::endl<< Contact::fields_name[i] << ": ";
		std::cout << this->inf[i] << std::endl;
	}
}