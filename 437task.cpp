#include<iostream>
#include<string>
using namespace std;

class personType{
    private:
    string FName;
    string MName;
    string LName;
    int Age;
    char gnd;
    public:
    personType()
    {
        FName = " ";
        MName = " ";
        LName = " ";
        Age=0;
        gnd=' ';
    }
    personType(string a, string b,string c,int d,char e)
    {
         FName = a;
        MName = b;
        LName = c;
        Age=d;
        gnd=e;
        cout<<FName;
        cout<<"\n"<<MName;
        cout<<"\n"<<LName;
        cout<<"\n"<<Age;
        cout<<"\n"<<gnd;

    }
    void setFName(string a)
    {
        FName = a;
    }
    void setMName(string a)
    {
        MName = a;
    }
    void setLName(string a)
    {
        LName = a;
    }
    void setAge(int a)
    {
        Age = a;
    }
    void setGnd(char a)
    {
        gnd = a;

    }
    string getFName()
    {
        return FName;
    }
    string getMName()
    {
        return MName;
    }
    string getLName()
    {
        return LName;
    }
    int getAge()
    {
        return Age;
    }
    char getGnd()
    {
        return gnd;
    }
};
int main()
{
    cout<<"Enter First Name ";
    string a;
    cin>>a;
    cout<<"Enter Last Name ";
    string b;
    cin>>b;
    cout<<"Enter Middle Name ";
    string c;
    cin>>c;
    personType p;
    personType m("Subahn","Bunty","NISAR",17,'M');
    personType *ptr;
    ptr=&p;
    ptr->setFName(a);
    ptr->setMName(c);
    ptr->setLName(b);
    cout<<ptr->getFName()<<endl;
    cout<<ptr->getLName()<<endl;
    cout<<ptr->getAge()<<endl;
    cout<<ptr->getGnd()<<endl;






}