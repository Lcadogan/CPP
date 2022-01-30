#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top:\t" << mstack.top() << std::endl;
    std::cout << "size:\t" << mstack.size() << std::endl;

    mstack.pop();
    std::cout << "\nmstack.pop();" << std::endl;
    std::cout << "size:\t" << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    std::cout << "\nbegin:\t" << *it << std::endl;

    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "end:\t" << *ite << std::endl;

    ++it;
    std::cout << "\n++it " << *it << std::endl;
    --it;
    std::cout << "--it " << *it << std::endl;
    std::cout << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    --it;
    std::cout << "\n--it " << *it << std::endl;
    --it;
    std::cout << "--it " << *it << std::endl;

    std::stack<int> s(mstack);
    std::cout << "\nstack<int> s(mstack)  size s:\t" << s.size() << std::endl;
    s.push(666);
    std::cout << "s.push(666);" << std::endl;
    std::cout << "stack<int> s(mstack)  size s:\t" << s.size() << std::endl;


    return 0;
}
