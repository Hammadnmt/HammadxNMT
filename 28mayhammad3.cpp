#include<iostream>
using namespace std;

class Reactangle{
    private:
    friend class PrintClass;
    double length,width;
    public:
    Reactangle(double a,double b)
    {
        length = a;
        width = b;
    }
    void setLength(double);
    void setWidth(double);
    double getlength();
    double getwidth();
    double getArea();
};

void Reactangle::setLength(double a){ length = a;}
void Reactangle::setWidth(double a){ width = a;}
double Reactangle::getArea(){return length*width;}

class PrintClass{
    public:
    void showArea(Reactangle a)
    {
        cout<<"Area of Reactangle "<<a.length*a.width<<endl;
    }

};

int main(){
    Reactangle r(2.1,4.1);
    r.setLength(3.1);
    r.setWidth(1.0);
    PrintClass p;
    p.showArea(r);
    
}