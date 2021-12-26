#include "Karen.hpp"

int main(void)
{
	std::string level;
	while(true)
	{
		std::cout<<"\n     Please choose a level"<<std::endl;
		std::cout<<"\"DEBUG\" \"INFO\" \"WARNING\" \"ERROR\""<<std::endl;
		std::cout<<">";
		std::cin>>level;
		Karen *karen = new Karen();
		karen->complain(level);
		delete karen;
	}
	return(0);
}
