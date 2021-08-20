#include<iostream>
using namespace std;

template<class T>
T  Max(T n1,T n2)
{
    if(n1>n2)
    cout<<"Max is "<<n1<<endl;
    else
    cout<<"Max is "<<n2<<endl;

}
int main(){
    int a,b;
    cout<<"Enter Two integers "<<endl;
    cin>>a>>b;
    Max(a,b);
    double c,d;
    cout<<"\nEnter doubles"<<endl;
    cin>>c>>d;
    Max(c,d);
    char e,f;
    cout<<"\nEnter two characters"<<endl;
    cin>>e>>f;
    Max(e,f);
    string  ab,cd;
    cout<<"Enter Two string"<<endl;
    cin>>ab>>cd;
    Max(ab,cd);
    

}
