#include<iostream>
using namespace std;

class Reactangle{
    private:
    int len,width;
    public:
    Reactangle(){ len=0; width=0;}
    Reactangle(int a,int b){ len=a; width=b;}
    void setL(int);
    void setW(int);
    int getL();
    int getW();
    void print(){ cout<<"Length: "<<len<<" Width: "<<width<<endl;}
     const Reactangle operator +(const Reactangle& p)
    {
        Reactangle o;
        o.len=this->len+p.len;
        o.width=this->width+p.width;
        return o;
    }
    const Reactangle operator -(const Reactangle& p)
    {
        Reactangle o;
        o.len=this->len-p.len;
        o.width=this->width-p.width;
        return o;
    }
   const Reactangle  operator *(Reactangle& p)
    {
        Reactangle temp;
        temp.len=this->len*p.len;
        temp.width=this->width*p.width;
        return temp;
    }
    const bool operator ==(const Reactangle& p)
    {
        if(p.len==p.width)
        return true;
    }
    const bool operator !=(const Reactangle& p)
    {
        if(p.len!=p.width)
        return false;
    }
};
void Reactangle::setL(int a){ len=a;}
void Reactangle::setW(int b){ width=b;}
int Reactangle::getL(){ return len;}
int Reactangle::getW(){ return width;}
int main(){ 
    Reactangle p(2,3);
    Reactangle r(2,2);
    p.setL(6);
    p.setW(3);
    Reactangle w;
    w=p+r;
    w.print();
    Reactangle s;
    s=p-r;
    s.print();
    Reactangle t;
    t=p*r;
    t.print();
    if(p==r)
    {cout<<"Both are equal."<<endl;}
    else cout<<"nope";
    if(p!=r)
    cout<<"Both are not equal."<<endl;
}