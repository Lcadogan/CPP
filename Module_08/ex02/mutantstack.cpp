#ifndef MUTANTSTACK_CPP
#define MUTANTSTACK_CPP
#include "mutantstack.hpp"

template < typename T, typename C >
MutantStack< T, C>::MutantStack(){}

template < typename T, typename C >
MutantStack< T, C>::MutantStack(MutantStack< T, C> const & obj) : std::stack< T, C>(obj){}

template < typename T, typename C >
MutantStack< T, C> MutantStack< T, C>::operator=(MutantStack< T, C > const & obj){
    std::stack< T, C >::operator = (obj);
}

template < typename T, typename C >
MutantStack< T, C>::~MutantStack(){}

template < typename T, typename C >
typename  MutantStack< T, C>::iterator MutantStack< T, C >::begin(){
    return this->c.begin();
}

template < typename T, typename C >
typename  MutantStack< T, C>::iterator MutantStack< T, C >::end(){
    return this->c.end();
}

#endif
