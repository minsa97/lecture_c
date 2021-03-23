// polya.cpp
#include <iostream>
#include "polya.h"
using namespace std;

istream& operator>>(istream &is, Polynomial &p){
    int noofterms;
    float coef;
    int exp;
    is>>noofterms;
    //cout<<"operator>>  , noofterms= "<<noofterms<<endl;
    for(int i=0;i<noofterms;i++){
        is>>coef>>exp;
        //cout<<"coef= "<<coef<<", exp= "<<exp<<endl;
        p.NewTerm(coef, exp);
    }
    
    return is;
}

ostream& operator<<(ostream &os, Polynomial &p){
    for (int i = 0; i < p.terms; i++){
        if (p.termArray[i].coef && p.termArray[i].coef != 1 && p.termArray[i].coef != -1)
            os << p.termArray[i].coef;

        if(p.termArray[i].exp!=0)
            os << "x^";

        if(p.termArray[i].exp && p.termArray[i].exp!=1)
            os<< p.termArray[i].exp;
            
        if (i != p.terms - 1 && p.termArray[i + 1].coef >= 0)
            os << " +";
        else if (p.termArray[i + 1].coef == -1)
            os << " -";
        else if (p.termArray[i + 1].coef < -1)
            os << " ";
    }
    os << endl;
    return os;
}

Polynomial::Polynomial():capacity(4), terms(0){
    termArray=new Term[capacity];
}

void Polynomial::NewTerm(const float theCoeff, const int theExp){
    if(terms==capacity){
        capacity*=2;
        Term *temp=new Term[capacity];
        copy(termArray, termArray+terms, temp);
        delete [] termArray;
        termArray=temp;
    }
    termArray[terms].coef=theCoeff;
    termArray[terms++].exp=theExp;
    //cout<<"NewTerm - terms= "<<terms<<endl;
}

Polynomial Polynomial::operator+(Polynomial &b){
    Polynomial c;
    int i = 0, j = 0;
    while ((i < terms) && (j < b.terms)){
        if (termArray[i].exp == b.termArray[j].exp){
            float t = termArray[i].coef + b.termArray[j].coef;
            if (t)
                c.NewTerm(t, termArray[i].exp);
            i++;
            j++;
        }
        else if (termArray[i].exp < b.termArray[j].exp){
            c.NewTerm(b.termArray[j].coef, b.termArray[j].exp);
            j++;
        }
        else{
            c.NewTerm(termArray[i].coef, termArray[i].exp);
            i++;
        }

    }

    //add in remaining term of *this
    while(i < terms){
        c.NewTerm(termArray[i].coef, termArray[i].exp);
        i++;
    }

    //add in remaining terms of b(x)
    while(j < b.terms){
        c.NewTerm(b.termArray[j].coef, b.termArray[j].exp);
        j++;
    }

    return c;
}

void Polynomial::Show(){
    cout<<"Show - terms= "<<terms<<endl;
    for(int i=0;i<terms;i++){
        cout<<"coef= "<<termArray[i].coef<<", exp= "<<termArray[i].exp<<'\n';
    }
    cout<<endl;
}
