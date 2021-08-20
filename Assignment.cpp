#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void func()=0;
    virtual void area(){cout<<" ";}  //virtual function
    virtual void perimeter(){cout<<" ";}   //virtual function
    virtual void volume(){cout<<" ";} //virtual functionx   
};
class Circle:public Shape{
    int r;
    public:
    Circle():r(4.3) {}
    void setRadius(int);
    void area();
    void perimeter();
    void volume(); 
    void func(){cout<<"pure function";}
};
void Circle::setRadius(int a){r=a;}
void Circle::area() { cout<<"\nArea of Circle "<<(3.14*r*r)<<endl;}
void Circle::perimeter() { cout<<"Perimeter of Circle "<<(2*3.14*r)<<endl;}
void Circle::volume() { cout << "Volume is not defined for circle.\n" << endl;}
void func(){cout<<"pure function";}
class sphere : public Circle{
    private:
    int length;
    public:
    sphere() : length(5.4) {}
    void setLength(int);
     void area();
     void perimeter();
     void volume();
     void func(){cout<<"pure function";}

};
void sphere::setLength(int l){ length=l;}
void sphere::area(){cout<<"Area of sphere "<<(4*3.14*length*length)<<endl;}
void sphere::perimeter() { cout<<"perimeter of sphere "<<endl;}
void sphere::volume(){cout<<"Volume of sphere "<<(1.33*3.14*length*length*length)<<"\n"<<endl;}



class Polygon:public Shape{
    public:
    virtual void func()=0;
    virtual void area(){cout<<" ";}  //virtual function
    virtual void perimeter(){cout<<" ";}   //virtual function
    virtual void volume(){cout<<" ";} //virtual functionx   
};

class Triangle:public Polygon{
    private:
    int base,length,side;
    public:
    Triangle():base(5.3),length(1.3),side(2.1){}
    Triangle(int a,int b){base=a;length=b;}
    void setSides(int,int,int);
    virtual void area();  //virtual function
    virtual void perimeter();   //virtual function
    virtual void volume(); //virtual functionx 
    void func(){cout<<"pure function";}

};
void Triangle::setSides(int a,int b,int c){base =a;length=b;side=c;}
void Triangle::area() { cout<<"Area of Triangle "<<(0.5*base*length)<<endl;}
void Triangle::perimeter(){cout<<"perimeter of Triangle "<<(base+length+side)<<endl;}
void Triangle::volume(){cout<<"Volume of Triangle "<<(0.5*base*length*side)<<"\n"<<endl;}


class Square : public Polygon{
    int r;
    public:
    Square(): r(7.3) {}
    void setSide(int);
     void area();
     void perimeter();
     void volume();
     void func(){cout<<"pure function";}

};
void Square::setSide(int a){r=a;}
void Square::area() { cout<<"Area of Square "<<(r*r)<<endl;}
void Square::perimeter() { cout<<"Perimeter of Square "<<(4*r)<<endl;}
void Square::volume() { cout<<"Volume of Square "<<(r*r*r*r)<<"\n"<<endl;}

class Cube:public Square{
    int length;
    public:
    Cube(): length(3.4) {}
    void setCube(int);
    void area();
    void perimeter();
    void volume();
    void func(){cout<<"pure function";}

};
void Cube::setCube(int a){length=a;}
void Cube::area() { cout<<"Area of Cube "<<(6*length*length)<<endl;}
void Cube::perimeter() { cout<<"Parimetre of Cube "<<(12*length)<<endl;}
void Cube::volume() { cout<<"Volume of Cube "<<(length*length*length)<<"\n"<<endl;}

int main(){
    Shape* ptr= new Circle();
    Shape* ptr1= new Square();
    Shape* ptr2= new Triangle();
    Shape* ptr3= new Cube();
    Shape* ptr4= new sphere();
    Shape* arr[5]={ptr,ptr1,ptr2,ptr3,ptr4};
    for(int i=0;i<5;++i)
    {
        arr[i]->area();
        arr[i]->perimeter();
        arr[i]->volume();
    }
    /*Shape* ptr;
    Circle c;
    ptr=&c;
    ptr->area();
    ptr->perimeter();
    ptr->volume();
    sphere s;
    ptr=&s;
    ptr->area();
    ptr->perimeter();
    ptr->volume();*/

}

