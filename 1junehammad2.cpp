#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int img;
    public:
    Complex(){real=0;img=0;}
    Complex(int x, int y) { real = x; img = y;}

    Complex operator +(Complex x)
    {
        Complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
    Complex operator -(Complex x)
    {
        Complex temp;
        temp.real=real-x.real;
        temp.img=img-x.img;
        return temp;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    void display1()
    {
         cout<<real<<"-"<<img<<"i"<<endl;
    }

};

int main()
{
    Complex p(2,1);
    Complex c(6,4);
    Complex d(5,3);
    Complex e;
    Complex f;
    e=c+p;
    f=c-p;
    e.display();
    f.display1();

}
