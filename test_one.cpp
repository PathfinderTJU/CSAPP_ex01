#include <iostream>
#include "test_one.h"
using namespace std;

void Test1::getIntAddress(int* i){
    cout << "The address of int: " << i << endl;
}

void Test1::getFloatAddress(float* f){
    cout << "The address of float: " << f << endl;
}

void Test1::getDoubleAddress(double* d){
    cout << "The address of double: " << d << endl;
}

void Test1::getCharAddress(char* c){
    /*
     *对于char*类型的变量，直接cout会输出指针指向的字符串内容（char[]字符串）
     *若想输出char变量的地址，需要将它强制转换为void*或int*类型
     */
    cout << "The address of char: " << (int*)c << endl;
}

void Test1::compare32and64(){
    short a;
    int b;
    float c;
    double d;
    char e;
    long f;
    long long g;
    void* h;

    cout << "short: " << sizeof(a) << endl;
    cout << "int: " << sizeof(b) << endl;
    cout << "float: " << sizeof(c) << endl;
    cout << "double: " << sizeof(d) << endl;
    cout << "char: " << sizeof(e) << endl;
    cout << "long: " << sizeof(f) << endl;
    cout << "long long: " << sizeof(g) << endl;
    cout << "void* " << sizeof(h) << endl;
}
