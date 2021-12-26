#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout<<"Error: bad arguments."<<std::endl;
		exit(1);
	}
	std::string path = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream file_out;
	file_out.open(path);
	if (!file_out.is_open())
		std::cout << "Error: file did not open."<<std::endl;
	else
	{
		std::string str;
		std::string str1;
		while(!file_out.eof()){
			std::getline(file_out, str);
			str1.append(str);
			str1.append("\n");
		}
		file_out.close();
		int pos = 0;
		int len_s2 = 0;
		int len_s1 = 0;
		len_s1 = s1.size();
		len_s2 = s2.size();
		bool flag = true;
		while (flag)
		{
			pos = str1.find(s1);
			if (pos == -1)
			{
				std::cout << "Not found."<<std::endl;
				exit (1);
			}
			else
			{
				str1.erase(pos, len_s1);
				str1.insert(pos, s2);
				if ((str1.find(s1, pos) == -1))
					flag = false;
			}
		}
		std::string dot = ".";
		pos = path.find(dot);
		path.erase(pos);
		std::string file_name;
		char ch;
		for(int i = 0; i < path.size(); i++)
		{
			 ch = (char)std::toupper(path[i]);
			 file_name.push_back(ch);
		}
		file_name.append(".replace");
		std::ofstream file_in;
		file_in.open(file_name);
		if(!file_in.is_open())
			std::cout<<"Error: file not created."<<std::endl;
		else
			file_in <<str1;
		file_in.close();
	}
	return (0);
}