#include<iostream>
using namespace std;

template<class T>
T  Swap(T n1,T n2)
{
    
    T temp=n1;
    n1=n2;
    n2=temp;
    cout<<"After swaping"<<endl;
    cout<<n1<<endl;
    cout<<n2;
    

}
int main(){
    int a,b;
    cout<<"Enter Two integers "<<endl;
    cin>>a>>b;
    Swap(a,b);
    double c,d;
    cout<<"\nEnter doubles"<<endl;
    cin>>c>>d;
    Swap(c,d);
    

}
