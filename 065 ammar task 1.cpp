#include<iostream>

using namespace std;

class Complex{

public:

int real;

int imaginary;


void num()

{

cin>>real;

cin>>imaginary;

}

	void sum(Complex n1, Complex n2)

{

real=n1.real+n2.real;

imaginary=n1.imaginary+n2.imaginary;

}

void display()

{

cout<<real<<"+"<<imaginary<<"i"<<endl;

}

	
};

int main()

{

Complex n1,n2,n3;

cout<<"Enter real and imaginary part of first complex number"<<endl;

n1.num();

cout<<"Enter real and imaginary part of second complex number"<<endl;

n2.num();

cout<<"Sum of two complex numbers is"<<endl;

n3.sum(n1,n2);

n3.display();

return 0;
}
