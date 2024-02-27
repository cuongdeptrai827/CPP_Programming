#ifndef DAT_HUC_H
#define DAT_HUC_H

#include <iostream>
using namespace std;

class Dathuc {
private:
    float *hs;
    int n;
public:
    Dathuc();
    Dathuc(float a[], int n);
    Dathuc(const Dathuc &f);
    ~Dathuc();
    friend ostream & operator << (ostream &, Dathuc &);
    friend istream & operator >> (istream &, Dathuc &);
    float operator[](int i)const;
    Dathuc & operator=(const Dathuc & f);
    bool operator==(const Dathuc &f);
    Dathuc operator + (const Dathuc &);
    Dathuc operator - (const Dathuc &);
    Dathuc operator * (const Dathuc &);
    Dathuc operator * (float);
    float operator()(float x)const;
    float evalue(float x)const;
};

#endif // DAT_HUC_H
