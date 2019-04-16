#include <iostream>
#include <bitset>
#include <cstdio>
#include "test_two.h"
using namespace std;

void Test2::transferFloat(float* f){
    union{//�����壬������ʾ���������ڴ��е�ʵ�ʴ洢��ʽ
        float input;
        int output;//����ӳ������int
    }data;

    data.input = *f;//ֻΪfloat��ֵ
    string result = "";
    for (int i = 0 ; i < 32 ; i++){
        int temp = data.output & 0x1;//��õ�ǰ���λ����
        result = (char) (temp + '0') + result;//ƴ��Ϊ�ַ���
        data.output = data.output >> 1;//���ƣ���ȡ��һλ
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
