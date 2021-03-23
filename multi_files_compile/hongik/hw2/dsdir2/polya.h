// polya.h
#ifndef POLYNOIAL_H
#define POLYNOIAL_H

#include <iostream>
using namespace std;

struct Term{
    float coef;
    int exp;
};

class Polynomial{
    friend ostream& operator<<(ostream&, Polynomial&);
    friend istream& operator>>(istream&, Polynomial&);

public:
    Polynomial();
    Polynomial operator+(Polynomial&);
    void NewTerm(const float, const int);
    void Show();
private:
    Term *termArray;
    int capacity;
    int terms;
};
#endif