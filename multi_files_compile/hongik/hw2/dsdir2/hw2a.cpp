// hw2a.cpp
#include <iostream>
using namespace std;
#include "polya.h"

int main(){
    Polynomial p1,p2,p3;
    cin>>p1>>p2;

    //p1.Show();
    //p2.Show();

    p3=p1+p2;
    cout<<p1<<p2<<p3;
    
    return 0;
}
