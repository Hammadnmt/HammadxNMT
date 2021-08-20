#include<iostream>
using namespace std;

template<class T>
T  Sqrt(T n1)
{
    T temp;
    temp=n1*n1;
    cout<<"Square of "<<n1<<" is "<<temp<<endl;
    

}
int main(){
    int a;
    cout<<"Enter  integers "<<endl;
    cin>>a;
    Sqrt(a);
    double c;
    cout<<"\nEnter doubles"<<endl;
    cin>>c;
    Sqrt(c);
    

}
