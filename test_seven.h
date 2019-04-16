#ifndef TEST_SEVEN_H_INCLUDED
#define TEST_SEVEN_H_INCLUDED
#include <iostream>

union ele{
    struct{
        int *p;
        int y;
    }e1;
    struct{
        int x;
        union ele *next;
    }e2;
};

class Test7{
public:
    void printUnion(union ele* e);
};

#endif // TEST_SEVEN_H_INCLUDED
