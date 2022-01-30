#ifndef	CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	int					index;
	static std::string	fields_name[5];
	std::string			inf[5];

	enum Field
	{
		First_Name = 0,
		Last_Name,
		NickName,
		Phone_number,
		Darkest_secret
	};
public:
	Contact();
	~Contact();

bool	set_inf(int index);
void	display_header(void);
void	display(void);
};
#endif
