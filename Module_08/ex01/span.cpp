#include "span.hpp"

Span::Span() : _maxSize(0) {}

Span::Span(unsigned int const n) : _maxSize(n) {}

Span::Span(Span const & obj) : _v(obj._v), _maxSize(obj._maxSize) {}

Span & Span::operator=(const Span &obj) {
    if (obj._maxSize != this->_maxSize)
        throw std::invalid_argument("Error: different sizes.");
    this->_v = obj._v;
    return *this;
}

Span::~Span() {
    this->_v.clear();
}

void Span::addNumber(const int n) {
    try{
        if (this->_v.size() == this->_maxSize)
            throw std::out_of_range("Error: No more space.");
        this->_v.push_back(n);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
}

unsigned int Span::shortestSpan(){
    if (this->_v.size() <= 1)
        throw std::invalid_argument("Error: Too few elements to match.");
    long min = UINT_MAX;
    std::vector<int> temp;
    temp = this->_v;
    std::sort(temp.begin(), temp.end());
    std::vector<int>::reverse_iterator rit;
    for (rit = temp.rbegin(); rit != temp.rend() - 1; ++rit){
        long temp = static_cast<long>(*rit) - static_cast<long>(*(rit + 1));
        if (temp < min)
            min = temp;
    }
    return static_cast<unsigned int>(min);
}

unsigned int Span::longestSpan(){
        if (this->_v.size() <=1)
            throw std::invalid_argument("Error: Too few elements to match.");
        int min = *(std::min_element(this->_v.begin(), this->_v.end()));
        int max = *(std::max_element(this->_v.begin(), this->_v.end()));
        return static_cast<unsigned int>((static_cast<long>(max) - static_cast<long>(min)));
}

int randomNumber(){
    return (std::rand() % 1000000);
}

void Span::randomFill(unsigned int n) {
    try{
        if (this->_maxSize < n)
            throw std::invalid_argument("Error: Too many elements.");
        this->_v.resize(n);
        std::srand(unsigned (std::time(0)));
        std::generate_n(this->_v.begin(), n, randomNumber);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
}
