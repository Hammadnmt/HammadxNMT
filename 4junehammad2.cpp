#include<iostream>
using namespace std;


class Logical
{
private:
int x;
public:
Logical(){x=0;}
Logical(int x1){ x=x1;}
int operator == (Logical& p){
    if(x==p.x)
   { return 1;}
   else return 0;
}
void setX(int a){ x=a; }
int operator < (Logical& p){
    if(this->x<p.x)
    return 1;
    else return 0;
}
int operator >(Logical& p){
    if(this->x>p.x)
    return 1;
    else 
    return 0;
}
int operator != (Logical& p){
    if(this->x!=p.x)
    return 1;
}
int operator >= (Logical& p){
	if(this->x>=p.x)
	return 1;
	else return 0;
}
int operator <= (Logical& p)
{
	if(this->x<=p.x)
	return 1;
	else return 0;
}
/*void display(){ cout<<x;}*/

};



int main(){
    Logical a,b;
    a.setX(2);
    b.setX(4);
    if(a==b)
    cout<<"Equal";
    else if(a!=b) 
	cout<<"Not equal"<<endl;
    if(a>b)
    cout<<"A is greater"<<endl;
    else if(a<b)
    cout<<"A is smaller"<<endl;
    if(a>=b)
    cout<<"A is greater but equal to b"<<endl;
    else if(a<=b)
    cout<<"A is less but equal to b"<<endl;
    return 0;



}