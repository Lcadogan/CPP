#include <string>
#include <iostream>
#include "Array.hpp"

template <typename T>
void fillArrTest(T Element, Array<T> &arr)
{	
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		arr[i] = Element++;
	}
}

int main()
{
	Array<int> intArr(0);
	Array<char> charArr(4);
	Array<double> doubleArr(4);
	std::cout << "----------------TEST_OPERATOR[]-------------" << std::endl;
	std::cout << "----Int_array----" << std::endl;
	fillArrTest( 1, intArr);
	for (unsigned int i = 0; i < intArr.size(); i++)
		std::cout << intArr[i] <<" ";
	std::cout << std::endl;
	std::cout << "----Char_array---" << std::endl;
	fillArrTest('a', charArr);
	for (unsigned int i = 0; i < charArr.size(); i++)
		std::cout << charArr[i] <<" ";
	std::cout << std::endl;
	std::cout << "----Double_array---" << std::endl;
	fillArrTest(1.1, doubleArr);
	for (unsigned int i = 0; i < doubleArr.size(); i++)
		std::cout << doubleArr[i] <<" ";
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "----------------TEST_COPY-------------------" << std::endl;
	Array<int> intArrCopy(intArr); //copy
	for (unsigned int i = 0; i < intArr.size(); i++)
		intArr[i] = 2;
	std::cout << "----intArr(original)---" << std::endl;
	for (unsigned int i = 0; i < intArr.size(); i++)
		std::cout << intArr[i] <<" ";
	std::cout << std::endl;
	std::cout << "----intArr(copy)---" << std::endl;
	for (unsigned int i = 0; i < intArrCopy.size(); i++)
		std::cout << intArrCopy[i] <<" ";
	std::cout << std::endl;
	std::cout << "----------------TEST_ASSIGN----------------" << std::endl;
	std::cout << "----intArr(before_assign)---" << std::endl;
	for (unsigned int i = 0; i < intArr.size(); i++)
		std::cout << intArr[i] <<" ";
	std::cout << std::endl;
	intArr = intArrCopy;
	std::cout << "----intArr(after_assign)---" << std::endl;
	for (unsigned int i = 0; i < intArr.size(); i++)
		std::cout << intArr[i] <<" ";
	std::cout << std::endl;
	return (0);
}

