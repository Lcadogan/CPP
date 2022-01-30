#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <string>

typedef struct Data_s {
    int         index;
    std::string name;
    std::string surname;
    std::string phone;
    std::string birthdate;
}              Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
