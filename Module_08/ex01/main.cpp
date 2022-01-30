#include "span.hpp"
#define MY_VAL 10000

void testBigVector(unsigned int n)
{
    try
    {
        Span sp = Span(n);
        sp.randomFill(n);
        std::cout << "shortestSpan:\t" << sp.shortestSpan() << std::endl;
        std::cout << "longestSpan:\t" << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main()
{
    std::cout << "\tORIGINAL" << std::endl;

    Span sp = Span(5);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "\n\tERRORS" << std::endl;

    //NO MORE SPACE
    try{
        sp.addNumber(11);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }

    //TOO FEW ELEMENTS TO MATCH
    try{
        Span sp1 = Span(5);
        sp1.addNumber(5);
        std::cout << sp1.shortestSpan() << std::endl;
        std::cout << sp1.longestSpan() << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }

    //TOO MANY ELEMENTS TO MATCH
    try{
        unsigned int n = 100;
        Span sp = Span(n);
        sp.randomFill(n + 2);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n\tLIMITS" << std::endl;
    {
        unsigned int n = 100;
        Span sp = Span(n);
        sp.randomFill(n - 2);
        sp.addNumber(INT_MAX);
        sp.addNumber(INT_MIN);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    std::cout << "\n\tMORE NUMBERS" << std::endl;
    std::cout << "= " << MY_VAL << std::endl;
    testBigVector(MY_VAL);
}
