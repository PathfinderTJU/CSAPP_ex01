#include <iostream>
#include "test_one.h"
#include "test_two.h"
#include "test_three.h"
#include "test_four.h"
#include "test_five.h"
#include "test_six.h"
#include "test_seven.h"
using namespace std;

int main()
{
    cout << "Test 1.1" << endl;
    Test1 test1;
    int a1 = 1;
    float b1 = 1.1f;
    double c1 = 1.1d;
    char d1 = 'a';

    int* pointer_a1 = &a1;
    float* pointer_b1 = &b1;
    double* pointer_c1 = &c1;
    char* pointer_d1 = &d1;

    test1.getIntAddress(pointer_a1);
    test1.getFloatAddress(pointer_b1);
    test1.getDoubleAddress(pointer_c1);
    test1.getCharAddress(pointer_d1);

    cout << "Test 1.2" << endl;
    test1.compare32and64();

    cout << "Test 2.1" << endl;
    Test2 test2;
    test2.transferFloat(pointer_b1);

    cout << "Test 2.2" << endl;
    test2.transferDouble(pointer_c1);

    cout << "Test 3" << endl;
    Test3 test3;
    float nor = 3.14f;
    float deno = 0.000000000000000000000000000000000000000001f;
    float infi = 1/0.0f;
    float nan = 0/0.0f;

    float* pointer_nor = &nor;
    float* pointer_deno = &deno;
    float* pointer_infi = &infi;
    float* pointer_nan = &nan;

    test3.normalized(pointer_nor);
    test3.Denomalized(pointer_deno);
    test3.Infinity(pointer_infi);
    test3.nan(pointer_nan);

    cout << "Test 4.1" << endl;
    Test4 test4;
    int a[5] = {1,5,2,1,3};
    int b[5] = {0,2,1,3,9};
    int c[5] = {9,4,7,2,0};
    int* d[3] = {a, b, c};
    test4.printAddress(d, 3, 5);

    cout << "Test 4.2" << endl;
    int t[6] = {1,2,3,4,5,6};
    test4.showEle(t, 6);

    cout << "Test 4.3" << endl;
    int m[5] = {1,2,3,4,5};
    test4.pointerPrint(m, 5);
    int* dd[3] = {b, c, a};
    test4.pointerShow(dd, 3, 5);

    cout << "Test 5" << endl;
    Test5 test5;
    test5.multi(d, 3, 5);

    cout << "Test 6" << endl;
    Test6 test6;
    stype_one s1;
    stype_two s2;

    stype_one* ps1 = &s1;
    stype_two* ps2 = &s2;

    test6.printOne(ps1);
    test6.printTwo(ps2);

    cout << "Test 7" << endl;
    Test7 test7;
    union ele ele_test;
    union ele* p = &ele_test;
    test7.printUnion(p);
}
