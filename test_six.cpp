#include <iostream>
#include "test_six.h"
using namespace std;

void Test6::printOne(stype_one* s1){
    /*
     *对于char*类型的变量，直接cout会输出指针指向的字符串内容（char[]字符串）
     *若想输出char变量的地址，需要将它强制转换为void*或int*类型
     */
    char* pointer_d = &((*s1).d);
    char* pointer_f = &((*s1).f);
    void* temp_d = (void*)pointer_d;
    void* temp_f = (void*)pointer_f;
    cout << "Struct type_one:" << endl;
    cout << "Total size: " << sizeof(*s1) << endl;
    cout << "Elements size: " << endl;
    cout << "char *a(" << &((*s1).a) << "): " << sizeof((*s1).a) << endl;
    cout << "short b(" << &((*s1).b) << "): " << sizeof((*s1).b) << endl;
    cout << "double c(" << &((*s1).c) << "): " << sizeof((*s1).c) << endl;
    cout << "char d(" << temp_d << "): " << sizeof((*s1).d) << endl;
    cout << "float e(" << &((*s1).e) << "): " << sizeof((*s1).e) << endl;
    cout << "char f(" << temp_f << "): " << sizeof((*s1).f) << endl;
    cout << "long long g(" << &((*s1).g) << "): " << sizeof((*s1).g) << endl;
    cout << "void *h(" << &((*s1).h) << "): " << sizeof((*s1).h) << endl;
    cout << endl;
}

void Test6::printTwo(stype_two* s2){
    char* pointer_d = &((*s2).d);
    char* pointer_f = &((*s2).d);
    void* temp_d = (void*)pointer_d;
    void* temp_f = (void*)pointer_f;
    cout << "Struct type_two:" << endl;
    cout << "Total size: " << sizeof(*s2) << endl;
    cout << "Elements size: " << endl;
    cout << "double c(" << &((*s2).c) << "): " << sizeof((*s2).c) << endl;
    cout << "long long g(" << &((*s2).g) << "): " << sizeof((*s2).g) << endl;
    cout << "float e(" << &((*s2).e) << "): " << sizeof((*s2).e) << endl;
    cout << "char *a(" << &((*s2).a) << "): " << sizeof((*s2).a) << endl;
    cout << "void *h(" << &((*s2).h) << "): " << sizeof((*s2).h) << endl;
    cout << "short b(" << &((*s2).b) << "): " << sizeof((*s2).b) << endl;
    cout << "char d(" << temp_d << "): " << sizeof((*s2).d) << endl;
    cout << "char f(" << temp_f << "): " << sizeof((*s2).f) << endl;
}
