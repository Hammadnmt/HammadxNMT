#include<iostream>
#include<string>
using namespace std;

class Reactangle{
    protected:
    double length;
    double width;
    public:

    void setlen(double a)
    {
        length=a;
    }
    void setwid(double a)
    {
        width=a;
    }
    double getArea()
    {
         return (length*width);
    }
};
class Box:public Reactangle{
    private:
    double height;
    public:
    Box(double a):Reactangle(& a )
    {
        height=a;
    }
    void setheight(double b)
    {
            height=b;

    }
    double getVol()
    {
        return (length*height*width);

    }
};
int main()
{

    Reactangle p;

    Reactangle *ptr;
    ptr=&p;
    ptr->setlen(2.5);
    ptr->setwid(3.4);
    cout<<"Area is "<<ptr->getArea()<<endl;
    Box a(1.2);
    Box ab;
    Box *lop;
    lop=&ab;
    lop->setheight(3.4);
    lop->getVol();

}