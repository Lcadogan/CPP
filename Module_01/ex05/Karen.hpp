#ifndef KAREN_H
#define KAREN_H

#include <iostream>
#include <string>

class Karen{
	private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void (Karen::*fan_addres[4])();

	public:
	Karen();
	Karen(std::string);
	~Karen();
	void complain(std::string level);
};

#endif