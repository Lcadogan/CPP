#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>

class Span {
    std::vector<int> _v;
    unsigned int const _maxSize;

public:
    Span();
    Span(unsigned int const n);
    Span(Span const & obj);
    ~Span();
    Span & operator = (Span const & obj);

    void print();
    void randomFill(unsigned int n);
    void addNumber(int const n);
    unsigned int shortestSpan(void);
    unsigned int longestSpan(void);
};

#endif
