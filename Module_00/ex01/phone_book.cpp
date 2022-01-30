#include "phone_book.hpp"

Phone_book::Phone_book()
{
	this->amount = 0;
	full = false;
}

Phone_book::~Phone_book()
{
}

void Phone_book::start(void)
{
	std::cout<<std::endl<<"--------* PHONE BOOK *---------"<<std::endl<<std::endl;
	std::cout<<" Please enter command [ADD, SEARCH, EXIT] "<<std::endl;
}

void Phone_book::request(void)
{
	std::cout<<std::endl << " Please enter command [ADD, SEARCH, EXIT] " <<std::endl;
}

void Phone_book::add_contact(void)
{
	std::cout<<"amount= "<<amount<<std::endl;
	if (amount > 7)
	{
		amount = 0;
		full = true;
		std::cout<<std::endl<< "*-- The phone book is full --*!"<<std::endl;
		std::cout<<"amount= "<<amount<<std::endl;
		this->contacts[amount].set_inf(amount + 1);
		amount++;
	}
	else if (contacts[amount].set_inf(amount + 1))
		amount++;
}
void Phone_book::show_search_header(void)
{
	std::cout << "|-------------------------------------------|" <<std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" <<std::endl;
	std::cout << "|-------------------------------------------|" <<std::endl;
	if (full == true)
	{
		amount = 8;
		for (int i = 0; i < this->amount; i++)
			this->contacts[i].display_header();
	}
	else
		for (int i = 0; i < this->amount; i++)
			this->contacts[i].display_header();
	std::cout << "|-------------------------------------------|" <<std::endl;
}
void Phone_book::search_contact(void)
{
	int	index;

	if (this->amount == 0)
		std::cout <<std::endl <<"*-- ADD a contact before searching! --*" << std::endl<<std::endl;
	else
	{
		this->show_search_header();
		std::cout << "*-- Enter Index to display informations or 0 to Exit --*\n";
		while (!(std::cin >> index) || (index < 0 || index > this->amount))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			if (std::cin.eof())
				exit(1);
			std::cout << "!--Invalid Index --!\n~";
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (index > 0)
			this->contacts[index - 1].display();
	}
}