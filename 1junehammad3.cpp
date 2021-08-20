#include<iostream>
using namespace std;

class Distance{
    private:
    int feet;
    int inches;
    public:
    Distance(){feet=0;inches=0;}
    Distance(int x, int y) { feet = x; inches = y;}
    
    Distance operator +(Distance x)
    {
        Distance temp;
        temp.feet=feet+x.feet;
        temp.inches=inches+x.inches;
        return temp;
    }
    Distance operator -(Distance x)
    {
        Distance temp;
        temp.feet=feet-x.feet;
        temp.inches=inches-x.inches;
        return temp;
    }
     Distance operator *(Distance x)
    {
        Distance temp;
        temp.feet=feet*x.feet;
        temp.inches=inches*x.inches;
        return temp;
    }
     Distance operator /(Distance x)
    {
        Distance temp;
        temp.feet=feet/x.feet;
        temp.inches=inches/x.inches;
        return temp;
    }
    void Addition()
    {
        cout<<"Adding "<<feet<<endl;
    }

    void Subtraction()
    {
        cout<<"Subtraction "<<feet-inches<<endl;
    }

    void Product()
    {
        cout<<"Product "<<feet*inches<<endl;
    }

    void Division()
    {
        cout<<"Division "<<feet/inches<<endl;
    }
    

};

int main()
{
    Distance p(2,2);
    Distance c(3,4);
    Distance d=c+p;
    d.Addition();
    Distance e=c-p;
    e.Subtraction();
    Distance f=c*p;
    f.Product();
    Distance g=c/d;
    g.Division();

}