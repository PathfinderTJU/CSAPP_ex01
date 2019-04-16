#ifndef TEST_SIX_H_INCLUDED
#define TEST_SIX_H_INCLUDED
#include <iostream>

struct stype_one{
    char *a;
    short b;
    double c;
    char d;
    float e;
    char f;
    long long g;
    void *h;
};

struct stype_two{
    double c;
    long long g;
    float e;
    char *a;
    void *h;
    short b;
    char d;
    char f;
};

class Test6{
public:
    void printOne(stype_one* s1);
    void printTwo(stype_two* s2);
};


#endif // TEST_SIX_H_INCLUDED
