#ifndef TEST_ONE_H_INCLUDED
#define TEST_ONE_H_INCLUDED

#include <iostream>

class Test1{
public:
    void getIntAddress(int* i);
    void getFloatAddress(float* f);
    void getDoubleAddress(double* d);
    void getCharAddress(char* c);
    void compare32and64();
};

#endif
