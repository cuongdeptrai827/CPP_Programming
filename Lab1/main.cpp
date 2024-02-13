#include <iostream>
#include "lab1.h"

using namespace std;

void Task1(){
    int a, b;
    cin >> a >> b;
    swap2num(&a, &b);
    cout << a << " " << b << endl;
    swap2num(a, b);
    cout << a << " " << b << endl;
}

void Task6(){
    double d; cin >> d;
    roundRealNum(&d);
    cout << d << endl;
    double d2; cin >> d2;
    roundRealNum(d2);
    cout << d2 << endl;
}

void Task9(){
    Complex c;
    double a;
    cin >> c.real >> c.imag >> a;
    multiply(&c, a);
    cout << c.real << "+" << c.imag << "i" << endl;
    multiply(c, a);
    cout << c.real << "+" << c.imag << "i" << endl;
}

void Task14(){
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
    //Task1();
    //Task6();
    //Task9();
    //Task14();
    return 0;
}