#include<iostream>
using namespace std;

template<class T>
T sum(T n[3])
{
	 T Sum=0;
for(int i=0;i<3;++i){
   
	Sum=Sum+n[i];
}
 cout<<"Sum is "<<Sum<<endl;
}




int main(){
    cout<<"Enter integers"<<endl;
    int a[3];
    for(int i=0;i<3;++i){
        cin>>a[i];
        
    }
    sum(a);
    cout<<"Enter double"<<endl;
    double b[3];
    for(int i=0;i<3;++i){
        cin>>b[i];
}
sum(b);
}