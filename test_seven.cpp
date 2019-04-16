#include <iostream>
#include "test_seven.h"
using namespace std;

void Test7::printUnion(union ele* e){
    cout << "Union ele:" << endl;
    cout << "Total size: " << sizeof(*e) << endl;
    cout << "Elements size: " << endl;
    cout << "struct_e1(" << &((*e).e1) << "): " << sizeof((*e).e1) << endl;
    cout << "int *p(" << &((*e).e1.p) << "): " << sizeof((*e).e1.p) << endl;
    cout << "int y(" << &((*e).e1.y) << "): " << sizeof((*e).e1.y) << endl;
    cout << "struct_e2(" << &((*e).e2) << "): " << sizeof((*e).e2) << endl;
    cout << "int x(" << &((*e).e2.x) << "): " << sizeof((*e).e2.x) << endl;
    cout << "union ele* next(" << &((*e).e2.next) << "): " << sizeof((*e).e2.next) << endl;
}
