#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T* const array, int const & size, void(*fun)(T const &elem )){
    for (int i = 0; i < size; i++)
        fun(array[i]);
}

// template<typename T>
// T* createArray(T Element, const int & size){
//     T *ret = new T[size];
//     for (int i = 0; i < size; i++)
//         ret[i] = Element++;
//     return ret;
// }

// template<typename T>
// void print(T const & elem){
//     std::cout << "print:\t" << elem << std::endl;
// }

#endif