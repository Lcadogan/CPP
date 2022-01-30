#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T, typename C = std::deque< T > >
class MutantStack : public std::stack< T , C > {
public:
    MutantStack< T, C >();
    MutantStack< T, C >(MutantStack const &);
    ~MutantStack< T, C >();
    MutantStack operator=(MutantStack const &);

    typedef typename std::stack< T, C >::container_type::iterator iterator;
    iterator begin();
    iterator end();

};

#include "mutantstack.cpp"

#endif
