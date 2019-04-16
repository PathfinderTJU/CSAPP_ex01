#include <iostream>
#include "test_five.h"
using namespace std;

void Test5::multi(int* a[], int x, int y){
    int t[y][x];

    for (int i = 0 ; i < x ; i++){//转置
        for (int j = 0 ; j < y ; j++){
            t[j][i] = a[i][j];
        }
    }

    int result[x][x];

    for (int i = 0 ; i < x ; i++){
        for (int j = 0 ; j < x ; j++){
            int temp = 0;
            for (int m = 0 ; m < y ; m++){
                temp += a[i][m] * t[m][j];//乘积之和
            }
            result[i][j] = temp;
        }
    }

    for (int i = 0 ; i < x ; i++){
        for (int j = 0 ; j < x ; j++){
            cout << result[i][j] << "  ";
        }
        cout << endl;
    }

}
