// rectb.h

#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

class Rectangle{
    friend ostream &operator <<(ostream&, Rectangle&);
public:
    Rectangle(int,int,int,int);
    bool operator <(Rectangle&);
    bool operator ==(Rectangle&);
    int GetHeight();
    int GetWidth();    
private:
    int xLow,yLow,height,width;
};

#endif