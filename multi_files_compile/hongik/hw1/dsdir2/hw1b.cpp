// hw1b.cpp
#include <iostream>
#include "rectb.h"
using namespace std;

int main(){
    Rectangle r(2,3,6,6), s(1,2,5,9);
    cout<<"<rectangle r> "<<r;
    cout<<"<rectangle s> "<<s;

    if(r<s)
        cout<<"s is bigger";
    else if(r==s)
        cout<<"Same size";
    else
        cout<<"r is bigger";
    
    cout<<endl;
    return 0;
}
