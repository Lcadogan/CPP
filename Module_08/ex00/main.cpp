#include "easyfind.hpp"
#include <iostream>
#include <list>
#define MY_VAL 10

int main(){

    std::cout << "*************LIST**************" << std::endl;
    std::list<int> lst;
    srand(time(0));
    for (int i = 0; i < MY_VAL; i++){
        int a = rand() / 100000000;
        lst.push_back(a);
        std::cout << a << " ";
    }
    std::cout << std::endl;

    int l = rand() / 100000000;
    std::cout << l << "\t*FIND INTO LIST" << std::endl;
    try{
        std::cout << "Number " << *easyfind(lst, l) << " is found in the list." << std::endl;
    }
    catch (const std::exception& e) {
      std::cerr << e.what() << std::endl;
    }


    std::cout << "\n***********VECTOR**************" << std::endl;
    std::vector<int> vct;
    srand(time(0) + 1);
    for (int i = 0; i < MY_VAL; i++){
        int a = rand() / 100000000;
        vct.push_back(a);
        std::cout << a << " ";
    }
    std::cout << std::endl;

    int v = rand() / 100000000;
    std::cout << v << "\t*FIND INTO VECTOR" << std::endl;
    try{
        std::cout << "Number " << *easyfind(vct, v) << " is found in the vector." << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
};
