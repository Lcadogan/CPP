#ifndef	PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "contact.hpp"

class Phone_book
{
private:
	Contact contacts[8];
	int		amount;
	bool	full;
public:
	Phone_book();
	~Phone_book();

	void start(void);
	void add_contact(void);
	void search_contact(void);
	void show_search_header(void);
	void request(void);
};

#endif
