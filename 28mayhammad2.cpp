#include<iostream>
#include<math.h>
using namespace std;

class Point{
    private:
    double x1, y1;
    double x2, y2;
    public:
    Point(){
        x1=0;
        x2=0;
        y1=0;
        y2=0;
    }
    Point(double a, double b,double c,double d)
    {
        x1=a;
        x2=b;
        y1=c;
        y2=d;
    }
    void setx1(double);
    void sety1(double);
    void setx2(double);
    void sety2(double);
    friend void Cal(Point);
};

void Point::setx1(double a) { x1 = a;}
void Point::sety1(double a) { y1 = a;}
void Point::setx2(double a) { x2 = a;}
void Point::sety2(double a) { y2 = a;}
void  Cal(Point p) { cout<<"Distance in plane is "<<sqrt(pow(p.x2 - p.x1, 2) + pow(p.y2 - p.y1, 2))<<endl; }
int main() {

    Point a;
    cout<<"Enter X1 ";
    double x1;
    cin>>x1;
    a.setx1(x1);
    cout<<"\nEnter Y1 ";
    double y1;
    cin>>y1;
    a.sety1(y1);
    cout<<"\nEnter X2 ";
    double x2;
    cin>>x2;
    a.setx2(x2);
    cout<<"\nEnter Y2 ";
    double y2;
    cin>>y2;
    a.sety2(y2);
    Cal(a);
}
