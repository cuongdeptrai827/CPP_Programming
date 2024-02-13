//
// Created by Cuong on 2/12/2024.
//

#include <iostream>
#include "lab1.h"

using namespace std;

void swap2num(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swap2num(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void roundRealNum(double *a){
    double temp = (int)(*a);
    if (abs(*a - temp) < 0.5) *a= temp;
    else{
        if (*a > 0) *a = temp + 1;
        else *a = temp - 1;
    }
}

void roundRealNum(double &a){
    double temp = (int)(a);
    if (abs(a-temp) < 0.5) a = temp;
    else{
        if (a > 0) a = temp + 1;
        else a = temp - 1;
    }
}

void multiply(Complex *c, double a){
    c -> real *= a;
    c -> imag *= a;
}

void multiply(Complex &c, double a){
    c.real *= a;
    c.imag *= a;
}

void transpose( Matrix &m){
    for (int i=0; i < 3;i++){
        for (int j= i + 1; j < 3;j++){
            double t = m.arr[i][j];
            m.arr[i][j] = m.arr[j][i];
            m.arr[j][i] = t;
        }
    }
}

void transpose(Matrix *m){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            double t = m->arr[i][j];
            m->arr[i][j] = m->arr[j][i];
            m->arr[j][i] = t;
        }
    }
}

