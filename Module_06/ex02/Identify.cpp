#include "Identify.hpp"
#include <ctime>
#include <unistd.h>

Base * createA(){
    std::cout << "Create A obj" << std::endl;
    return new A();
}

Base * createB(){
    std::cout << "Create B obj" << std::endl;
    return new B();
}

Base * createC(){
    std::cout << "Create C obj" << std::endl;
    return new C();
}

Base * generate(void){
    Base *(*create[3])() = {&createA, &createB, &createC};
    srand(time(0));
    usleep(400000);
    return create[(rand() % 3000) % 3]();
}

void identify(Base* p){
    std::cout << "From ptr: obj is type - ";
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p){
    Base b;
    std::cout << "From ref: obj is type - ";
    try{
        b = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception & e){}
    try{
        b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch(const std::exception & e){}
    try{
        b = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch(const std::exception & e){}
}

int main(){
    Base *p;
    for (int i = 0; i < 9 ; i++){
        p = generate();
        identify(p);
        identify(*p);
        delete p;
        std::cout << "---------" << std::endl;
    }
    return 0;
}
