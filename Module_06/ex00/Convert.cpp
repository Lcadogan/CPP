#include "Convert.hpp"
#include "limits.h"

Convert::Convert(const char * arg) : arg(arg){}
Convert::Convert(const Convert & src) : arg(src.arg){}
Convert::~Convert(void) {}
Convert & Convert::operator=(const Convert &src) {
    this->arg = src.arg;
    return *this;
}

void Convert::convertAll(const char * arg) {
    Convert::toChar(arg);
    Convert::toInt(arg);
    Convert::toFloat(arg);
    Convert::toDouble(arg);
}

void Convert::toChar(const char * arg) {
    try{
        std::cout << "char:\t";
        if (strlen(arg) == 1 && !isdigit(*arg)){
            std::cout << "'" << static_cast<const char>(*arg) << "'" << std::endl;
            return;
        }
        int i;
        i = atoi(arg);
        if ((!i && strcmp(arg, "0")) || i < 0 || i > CHAR_MAX)
            throw "impossible";
        char c = static_cast<char>(i);
        if (isprint(c)){
            std::cout << "'" << c << "'" << std::endl;
            return;
        }
        throw "Non displayable";
    }
    catch(const char * e){
        std::cerr << e << std::endl;
    }
}

void Convert::toInt(const char * arg) {
    try{
        std::cout << "int:\t";
        long int l;
        l = strtol(arg, 0, 10);
        if (l > INT_MAX || l < INT_MIN)
            throw "impossible";
        if (!l && strcmp(arg, "0")){
            if (strlen(arg) == 1 && isprint(*arg))
                std::cout << static_cast<const int>(*arg) << std::endl;
            else
                throw "impossible";
        }
        else
            std::cout << static_cast<const int>(l) << std::endl;
    }
    catch (const char * e) {
        std::cerr << e << std::endl;
    }
}

void Convert::toFloat(const char * arg) {
    try{
        std::cout << "float:\t";
        float f;
        f = atof(arg);
        if (!f && strcmp(arg, "0")){
            if (strlen(arg) == 1 && isprint(*arg))
                std::cout << static_cast<const float>(*arg);
            else
                throw "impossible";
        }
        else
            std::cout << f;
        if (f - floor(f) == 0)
            std::cout << ".0";
        std::cout << "f" << std::endl;
    }
    catch (const char * e) {
        std::cerr << e << std::endl;
    }
}

void Convert::toDouble(const char * arg) {
    try {
        std::cout << "double:\t";
        double d;
        d = strtod(arg, 0);
        if (!d && strcmp(arg, "0")){
            if (strlen(arg) == 1 && isprint(*arg))
                std::cout << static_cast<const double>(*arg);
            else
                throw "impossible";
        }
        else
            std::cout << d;
        if (d - floor(d) == 0)
            std::cout << ".0";
        std::cout << std::endl;
    }
    catch (const char * e) {
        std::cerr << e << std::endl;
    }
}