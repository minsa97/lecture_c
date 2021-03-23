// polyb.cpp
#include <iostream>
#include "polyb.h"
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
    p.sortArray(); //정렬
    
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

Polynomial Polynomial::operator*(Polynomial &b){
    Polynomial c; //*this와 b의 곱을 c에 저장하려고 한다

    for (int i = 0; i < terms; i++){
        for (int j = 0; j < b.terms; j++){
            int place = -1; //찾고자 하는 인덱스가 없는 경우 -1
            int tempCoef = termArray[i].coef*b.termArray[j].coef;
            int tempExp = termArray[i].exp+b.termArray[j].exp;

            for (int k = 0; k < c.terms; k++)
                if (c.termArray[k].exp == tempExp)
                    place = k; //같은 지수인 인덱스가 있다면 place에 저장

            if(place==-1)
                c.NewTerm(tempCoef, tempExp); //같은 지수가 없다면 새로 추가하고
            else
                c.termArray[place].coef += tempCoef; //같은 지수가 있다면 더한다
        }
    }

    return c;
}

void Polynomial::sortArray(){
    //버블 소트
    for(int i=0; i<terms; i++){
        for(int j=i+1; j<terms; j++){
            if (termArray[i].exp < termArray[j].exp){
                Term temp = termArray[i];
                termArray[i] = termArray[j];
                termArray[j] = temp;
            }
        }
    }
}

void Polynomial::Show(){
    cout<<"Show - terms= "<<terms<<endl;
    for(int i=0;i<terms;i++){
        cout<<"coef= "<<termArray[i].coef<<", exp= "<<termArray[i].exp<<'\n';
    }
    cout<<endl;
}
