#include <iostream>
#include "lab1.h"

using namespace std;

void Task2(){
    cout << " Task 2 : Swap 2 integer numbers " << endl;
    int a, b;
    cin >> a >> b;
    swap2num(&a, &b);
    cout << a << " " << b << endl;
    swap2num(a, b);
    cout << a << " " << b << endl;
}

void Task7(){
    cout << " Task 7 : Round real numbers " << endl;
    double d; cin >> d;
    roundRealNum(&d);
    cout << d << endl;
    double d2; cin >> d2;
    roundRealNum(d2);
    cout << d2 << endl;
}

void Task10(){
    cout << " Task 10 : Multiple of a complex number with a real number " << endl;
    Complex c;
    double a;
    cin >> c.real >> c.imag >> a;
    multiply(&c, a);
    cout << c.real << "+" << c.imag << "i" << endl;
    multiply(c, a);
    cout << c.real << "+" << c.imag << "i" << endl;
}

void Task13(){
    cout << " Task 13 : Transpose a 3x3 matrix " << endl;
    Matrix m;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> m.arr[i][j];
        }
    }
    cout <<endl;
    transpose(&m);
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << m.arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    transpose(m);
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << m.arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    Task2();
    Task7();
    Task10();
    Task13();
    return 0;
}