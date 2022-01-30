#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <cmath>

class Convert {

public:
    Convert(const char * arg);
    Convert(Convert const & src);
    virtual ~Convert(void);
    Convert &operator=(Convert const &src);

    static void convertAll(const char *);
    static void toChar(const char *);
    static void toInt(const char *);
    static void toFloat(const char *);
    static void toDouble(const char *);

private:
    const char * arg;
};

#endif
