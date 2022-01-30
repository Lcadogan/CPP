#include <iostream>
int main(int argc, char **argv)
{
	int i = 1;

	if (argc >= 2)
	{
		while (i < argc)
		{
			std::string str(argv[i]);
			int j = 0;
			while (j < str.length())
			{
				std::cout << (char)std::toupper(str[j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout<<" * LOUD AND UNBEARABLE FEEDBACK NOISE * "<<std::endl;
	return (0);
}
