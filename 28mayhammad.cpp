#include<iostream>
using namespace std;

class Distance{
    private:
    double Feet;
    double inches;
    public:
    Distance()
    {
        Feet=0.0;
        inches=0.0;

    }
    Distance(double a, double b)
    {
        Feet=a;
        inches=b;
    }
    void setFeet(double);
    void setinches(double);
    double getFeet();
    double getinches();
    friend void addDistance(Distance);
    friend void display(Distance); 
};

void Distance::setFeet(double a)  { Feet=a; }
void Distance::setinches(double a) {inches=a;}
double Distance::getFeet() { return Feet;}
double Distance::getinches() { return inches;}
void addDistance(Distance d) { cout<<"Sum of distances "<<d.Feet+d.inches<<endl;}
void display(Distance p) { cout<<"Feet= "<<p.Feet<<endl<<"inches= "<<p.inches<<endl; cout<<"Result= "<<p.Feet+p.inches<<endl;}
int main() {
    Distance ds(4.4,2.3);
    ds.setFeet(1.3);
    ds.setinches(3.1);
    addDistance(ds);
    display(ds);
}