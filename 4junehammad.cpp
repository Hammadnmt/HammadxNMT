#include<iostream>
using namespace std;

class Point{
    private:
    int x,y;
    public:
    Point(){ this->x = 0;this->y = 0;}
    Point(int X,int Y){this->x = X;this->y = Y;}
    void setX(int);
    void setY(int);
    const Point operator +(const Point& p)
    {
        Point o;
        o.x=this->x+p.x;
        o.y=this->y+p.y;
        return o;
    }
    const Point operator -(const Point& p)
    {
        Point o;
        o.x=this->x-p.x;
        o.y=this->y-p.y;
        return o;
    }
    void print()const{cout<<"Point in plane are "<<x<<"'"<<y<<endl;}
};
int main(){ 
    Point a(2,4);
    Point c(8,1);
    Point m=a+c;
    Point n=a-c;
    m.print();
    n.print();
}