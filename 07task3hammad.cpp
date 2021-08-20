
#include <iostream>
using namespace std;

class pointType
{
	private:
	int *x;
	int *y;
public:
pointType()
{
x= new int;
y=new int;
}
void pointType1(double X,double Y)
{
x= new int(X);
y=new int(Y);
}          
double getX()
{
return *x;
}
double getY()
{
return *y;
}
void print()
{
cout<<"("<<*x<<","<<*y<<")\n";
}
~pointType()
{
delete x;
delete y;
}
};
int main()
{
pointType p2;
double x,y;
cout<<"Enter an x Coordinate for point ";
cin>>x;
cout<<"Enter an y Coordinate for point ";
cin>>y;
p2.getX();
p2.getY();
p2.pointType1(x,y);
p2.print();  
return 0;
}
