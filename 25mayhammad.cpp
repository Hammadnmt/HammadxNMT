#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void CalculateArea()=0;
    virtual void CalculateParameter()=0;
    };

class Circle:public Shape
{
    private:
    double radius=6.6;
    public:
    void SetRadius(double a) { radius=a; }
    void CalculateArea()  {cout<<"Area of Circle "<<(3.14*radius*radius)<<endl;}
    void CalculateParameter() {cout<<"Parameter of Circle "<<(3.14*radius*2)<<endl; }

};

class Square : public Shape{
    private:
    double length=3.2;
    public:
    void setLength(double l) { length=l; }
    void CalculateArea() {cout<<"Area of Square "<<(length*length)<<endl;}
    void CalculateParameter()
    {
        cout<<"Parameter of Square "<<4*length<<endl;
    }
};

class Triangle : public Shape{
    private:
    double base=1.2;
    double height=6.5;
    double altitude=3.4;
    public:
    void CalculateArea() {cout<<"Area of Triangle "<<0.5*base*height<<endl;}
    void CalculateParameter() {cout<<"Parameter of Triangle "<<base+height+ altitude<<endl;}
};


int main()
{
    Shape* ptr= new Circle();
    Shape* ptr1= new Square();
    Shape* ptr2= new Triangle();
    Shape* shape[3]={ptr, ptr1,ptr2};
    for(int i=0;i<3;i++)
    {
    shape[i]->CalculateArea();
    shape[i]->CalculateParameter();
    }
    return 0;
}
