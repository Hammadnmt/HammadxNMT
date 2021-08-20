#include<iostream>
#include<string>
using namespace std;

class StudentType{
    private:
    string Name;
    int Rollnum;
    string Deg;
    int Sem;
    double CGPA;
    string Grad;
    string Div;
    public:
    StudentType(){
        Name=" ";
        Rollnum=0;
    }
    StudentType(string name, int rollnum)
    {
        Name = name;
        Rollnum = rollnum;
    }
    void setName(string a)
    {
        Name = a;
    }
    string getName()
    {
        return Name;
    }
    void setRollnum(int a)
    {
        Rollnum = a;
    }
    int getRollnum()
    {
        return Rollnum;
    }
    void setDeg(string a)
    {
        Deg = a;
    }
    string getDeg()
    {
        return Deg;
    }
    void setCGPA(double a)
    {
        CGPA = a;
    }
    double getCGPA()
    {
        return CGPA;
    }
   void assignGrad()
   {
       if(CGPA>=3.70 && CGPA<=4.00)
       Grad="A+";
       else if(CGPA>=3.30 && CGPA<=3.60)
       Grad="B+";
       else if(CGPA>=2.70 && CGPA<=3.20)
       Grad="B";
       else if(CGPA>=2.40 && CGPA<=2.60)
       Grad="C";
       else if(CGPA>=2.00 && CGPA<=2.30)
       Grad="D";
   }
   string getGrad()
   {
       return Grad;
   }
   void AssigDiv()
   {
       if(Grad=="A+" ||  Grad=="B+" || Grad=="B")
       Div="1st";
       else if (Grad=="C")
       Div="2nd";
       else if (Grad=="D")
       Div="3rd";
    }
    string getDiv()
    {
        return Div;
    }
    void print()const
    {
        cout<<"Name is "<<Name<<endl;
        cout<<"Roll number ia "<<Rollnum<<endl;
        cout<<"Degree is "<<Deg<<endl;
        cout<<"Semester is "<<Sem<<endl;
        cout<<"CGPA is "<<CGPA<<endl;
        cout<<"Grade is "<<Grad<<endl;
        cout<<"Devision is "<<Div<<endl;
    }
    
};
int main()
{
    StudentType p("Hammad",437);
    StudentType o;
    StudentType *ptr;
    ptr=&o;
    string a,b;
    int c;
    double e;
    cout<<"Enter Student name ";
    getline(cin,a);
    cout<<"Enter Rollnumber ";
    cin>>c;
    cout<<"Enter Degree ";
    cin>>b;
    cout<<"Enter CGPA ";
    cin>>e;
    ptr->setName(a);
    ptr->setRollnum(c);
    ptr->setDeg(b);
    ptr->setCGPA(e);
    ptr->assignGrad();
    ptr->AssigDiv();
    ptr->print();
}