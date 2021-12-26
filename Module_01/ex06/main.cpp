#include "Karen.hpp"

int main(int argc, char **argv)
{
	while(argc == 1){
		std::cout<<"ERROR: No arguments."<<std::endl;
		exit(1);
	}
	std::string level = argv[1];
	Karen *karen = new Karen();
	karen->complain(level);
	delete karen;
	return(0);
}
