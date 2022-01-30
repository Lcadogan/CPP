#include "Serialization.hpp"

int main(){
    Data * mydata = new Data ;

    mydata->index = 0;
    mydata->name = "NAME";
    mydata->surname = "SURNAME";
    mydata->birthdate = "00/00/0000";
    mydata->phone = "+0(000)000-00-00";

    std::cout << "PRINT STRUCT:"
    << "\t\t" << mydata->index << std::endl;
    std::cout << "\t\t\t"  << mydata->name << std::endl;
    std::cout << "\t\t\t"  << mydata->surname << std::endl;
    std::cout << "\t\t\t"  << mydata->birthdate << std::endl;
    std::cout << "\t\t\t"  << mydata->phone << std::endl;
    std::cout << std::endl;

    std::cout << "ORIGINAL PTR:\t\t" <<  mydata << std::endl;
    uintptr_t ser = serialize(mydata);
    Data * deser = deserialize(ser);
    std::cout << "SERIALIZE:\t\t"<<  ser << std::endl;
    std::cout << "DESERIALIZE:\t\t"<<  deser << std::endl;
    std::cout << std::endl;

    std::cout << "PRINT DESER STRUCT:"
    << "\t" << deser->index << std::endl;
    std::cout << "\t\t\t"  << deser->name << std::endl;
    std::cout << "\t\t\t"  << deser->surname << std::endl;
    std::cout << "\t\t\t"  << deser->birthdate << std::endl;
    std::cout << "\t\t\t"  << deser->phone << std::endl;

    return 0;
}

uintptr_t serialize(Data* ptr){
    uintptr_t ret;
    ret = (reinterpret_cast<uintptr_t>(ptr));
    return ret;
}

Data* deserialize(uintptr_t raw){
    Data * ret;
    ret = reinterpret_cast<Data *>(raw);
    return ret;
}
