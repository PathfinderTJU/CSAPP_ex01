#include <iostream>
#include <bitset>
#include <cstdio>
#include "test_two.h"
using namespace std;

void Test2::transferFloat(float* f){
    union{//联合体，用于显示浮点数在内存中的实际存储形式
        float input;
        int output;//用来映射结果的int
    }data;

    data.input = *f;//只为float赋值
    string result = "";
    for (int i = 0 ; i < 32 ; i++){
        int temp = data.output & 0x1;//获得当前最低位的数
        result = (char) (temp + '0') + result;//拼接为字符串
        data.output = data.output >> 1;//右移，获取下一位
    }
    cout << "float " << *f << ": " << result << endl;
}

void Test2::transferDouble(double* d){
    union{
        double input;
        long long output;
    }data;

    data.input = *d;
    string result = "";
    for (int i = 0 ; i < 64 ; i++){
        int temp = data.output & 0x1;
        result = (char) (temp + '0') + result;
        data.output = data.output >> 1;
    }
    cout << "double " << *d << ": " << result << endl;
}
