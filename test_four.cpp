#include <iostream>
#include "test_four.h"
using namespace std;

void Test4::printAddress(int* a[], int x, int y){
    for (int i = 0 ; i < x ; i++){
        cout << "a[" << i << "](" << ((a) + (y * i)) << "): ";//编译器的优化，地址加一个int数，会自动乘以int的大小4
        for (int j = 0 ; j < y ; j++){
            cout << a[i][j] << "(" << (a)+ (i*y+j) << ") ";
        }
        cout << endl;
    }
}

void Test4::showEle(int a[], int x){
    cout << "The address of a[0]: " << a << endl;
    cout << "The address of a[" << x <<"]: " << a+x << endl;
}

void Test4::pointerPrint(int* a, int n){
    for (int i = 0 ; i < n ; i++){
        cout << "a[" << i << "]: " << *(a + i) << "(" << (a + i) << ")" << endl;
    }
    *(a+5) = 10;
    cout << "Modified a[5] by 10: *(a+5) = 10. Result a[5] = " << a[5] << endl;
}

void Test4::pointerShow(int* a[], int x, int y){
    for (int i = 0 ; i < x ; i++){
        for (int j = 0 ; j < y ; j++){
            cout << "a[" << i << "][" << j << "]: " << *(*(a + i) + j) << "(" << (*(a + i) + j) << ")" << endl;
        }
    }
}
