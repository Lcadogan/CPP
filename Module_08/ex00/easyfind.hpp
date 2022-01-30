#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <vector>

template<typename T>
typename T::iterator easyfind(T & t, int i)
{
    typename T::iterator it;
    for(it = t.begin(); it != t.end(); it++)
        if (*it == i)
            return it;
        throw std::invalid_argument("NOT FOUND!");
}

#endif
