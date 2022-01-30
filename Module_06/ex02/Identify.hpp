#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP

#include <string>
#include <iostream>

class Base {
public:
    virtual ~Base(){}
};

class A: public Base{
public:
    A(){}
    virtual ~A(){}
};

class B: public Base{
public:
    B(){}
    virtual ~B(){}
};

class C: public Base{
public:
    C(){}
    virtual ~C(){}
};

#endif
