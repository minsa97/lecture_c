// polyb.h
#ifndef POLYNOIAL_H
#define POLYNOIAL_H

#include <iostream>
using namespace std;

//class Polynomial; //전방참조
// class Term{
// private:
//     float coef; //coefficient
//     int exp; //exponent

//     friend class Polynomial;
//     friend ostream &operator<<(ostream &, Polynomial &);
//     friend istream &operator>>(istream &, Polynomial &);
// };

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
    Polynomial operator*(Polynomial&);
    void NewTerm(const float, const int);
    void sortArray();
    void Show();
private:
    Term *termArray;
    int capacity;
    int terms;
};
#endif