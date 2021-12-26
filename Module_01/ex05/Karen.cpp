#include "Karen.hpp"
Karen::Karen(){
	fan_addres[0] = &Karen::debug;
	fan_addres[1] = &Karen::info;
	fan_addres[2] = &Karen::warning;
	fan_addres[3] = &Karen::error;
}

Karen::~Karen(){}

void Karen::debug(void){
	std::cout<<"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"<<std::endl;
}
void Karen::info(void){
	std::cout<<"I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"<<std::endl;
}
void Karen::warning (void){
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."<<std::endl;
}
void Karen::error (void){
	std::cout<<"This is unacceptable, I want to speak to the manager now."<<std::endl;
}
void Karen::complain(std::string level){

	std::string tmp [5];

	tmp[0] = "DEBUG";
	tmp[1] = "INFO";
	tmp[2] = "WARNING";
	tmp[3] = "ERROR";
	tmp[4] = "EXIT";

	int i = 0;
	while (tmp[i] != level && i <= 5) {
			++i;
		}
	switch (i)
		{
		case (0):
			(this->*fan_addres[i])();
				break;
		case (1):
			(this->*fan_addres[i])();
				break;
		case (2):
			(this->*fan_addres[i])();
				break;
		case (3):
			(this->*fan_addres[i])();
				break;
		case (4):
			std::cout<<"By!!!"<<std::endl;
			exit(0);
		default:
			std::cout<<"Bad level!"<<std::endl;
			break;
		}
}
