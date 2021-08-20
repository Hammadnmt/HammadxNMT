#include<iostream>
#include<string>
using namespace std;

class Polygon{
    private:
    double parameter;
    double apothem ;
    public:
    Polygon(){
        parameter =0;
        apothem =0;
    }
    Polygon(double a, double b)
    {
        parameter =a;
        apothem =b;
    }
    void setParameter(double p);
    void setAPothem(double a);
    double getParameter();
    double getAPothem();
    double computeArea();
};
void Polygon::setParameter(double p)
{
    parameter = p;
}
void Polygon::setAPothem(double a)
{
    apothem = a;
}
double Polygon::getParameter()
{
    return parameter;
}
double Polygon::getAPothem()
{
    return apothem;
}
double Polygon::computeArea()
{
    return (parameter*apothem)/2;
}

class Triangle:virtual public Polygon{
    private:
    double base;
    double length;
    public:
    Triangle(){
        base=0;
        length=0;
    }
    Triangle(double a, double b)
    {
        base=a;
        length=b;
    }
    void setBase(double );
    void setLength(double );
    double getBase();
    double getLength();
    double computeArea();

};
void Triangle::setBase(double b){
    base=b;
}
void Triangle::setLength(double l){
    length=l;
}
double Triangle::getLength()
{
    return length;
}
double Triangle::getBase()
{
    return base;
}
double Triangle::computeArea()
{
    return (length*base)/2;
}

class Reactangle:virtual public Polygon{
    private:
    double length;
    double width;
    public:
    Reactangle()
    {
        length=0;
        width=0;
    }
     Reactangle(double a, double b)
    {
        length=a;
        width=b;
    }
    
    void setLength(double);
    void setWidth(double);
    double getLength();
    double getWidth();
    double computeArea();
};
void Reactangle::setLength(double l)
{      
    length=l;
}
void Reactangle::setWidth(double w)
{
    width=w;
}
double Reactangle::getLength()
{
    return length;
}
double Reactangle::getWidth()
{
    return width;
}
double Reactangle::computeArea()
{
    return (length*width);
}

class Square :virtual public Reactangle{
    private:
    double side;
    public:
    Square(){
        side=0;
    }
    Square(double a){
        side=a;
    }
    void setSide(double a){
        side=a;
    }
    double getSide(){
        return side;
    }
    double computeArea()
    {
        return (side*side);
    }
};

int main()
{
    Polygon obj(1.1,9.7);
    obj.setParameter(6.8);
    obj.setAPothem(8.1);
    cout<<"Area of poly "<<obj.computeArea();
    Triangle t(2.3,2.5);
    t.setLength(3.2);
    t.setBase(7.8);
    cout<<endl<<"Area of triangle "<<t.computeArea();
    Reactangle r(4.5,7.8);
    r.setLength(6);
    r.setWidth(7);
    cout<<endl<<"Area of reactangle "<<r.computeArea();

    Square p(5.5);
    p.setSide(5.7);
    cout<<endl<<"Area of square is "<<p.computeArea();

}
