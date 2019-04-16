#include <iostream>
#include "test_three.h"
using namespace std;

void Test3::normalized(float* f){
    union{
        float input;
        int output;
    }data;

    data.input = *f;
    string result = "";
    for (int i = 0 ; i < 32 ; i++){
        int temp = data.output & 0x1;
        result = (char) (temp + '0') + result;
        data.output = data.output >> 1;
    }
    cout << "Normalized " << *f << ": " << result << endl;
}

void Test3::Denomalized(float* f){
    union{
        float input;
        int output;
    }data;

    data.input = *f;
    string result = "";
    for (int i = 0 ; i < 32 ; i++){
        int temp = data.output & 0x1;
        result = (char) (temp + '0') + result;
        data.output = data.output >> 1;
    }
    cout << "Denomalized " << *f << ": " << result << endl;
}

void Test3::Infinity(float* f){
    union{
        float input;
        int output;
    }data;

    data.input = *f;
    string result = "";
    for (int i = 0 ; i < 32 ; i++){
        int temp = data.output & 0x1;
        result = (char) (temp + '0') + result;
        data.output = data.output >> 1;
    }
    cout << "Infinity " << *f << ": " << result << endl;
}

void Test3::nan(float* f){
    union{
        float input;
        int output;
    }data;

    data.input = *f;
    string result = "";
    for (int i = 0 ; i < 32 ; i++){
        int temp = data.output & 0x1;
        result = (char) (temp + '0') + result;
        data.output = data.output >> 1;
    }
    cout << "Nan " << *f << ": " << result << endl;
}
