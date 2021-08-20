#include<iostream>
#include<string>
using namespace std;

class Person{
    protected:
    string Fname;
    string Lname;
    int age;
    public:
    
    void setFname(string a)
    {
        Fname = a;
    }
    string getFname()
    {
        return Fname;
    }
    void setLname(string b)
    {
        Lname=b;
    }
    string getLname()
    {
        return Lname;
    }
    void setAge(int a)
    {
        age=a;
    }
    int getAge()
    {
        return age;
    }
    void show()
    {
        cout<<"First name is "<<Fname<<endl;
        cout<<"Last name is "<<Lname<<endl;
        cout<<"Age is "<<age<<endl;
    }
    };
    
   class Student:public Person{
       private:
       int rollnum;
       string degree;
       double CGPA;
       
       public:
       Student(int a , string b)
       {
           rollnum = a;
       degree=b;
       }

       void setRoll(int);
       void setdegree(string);
       int getRoll();
       string getdegree();
       void setCGPA(double);
       double getCGPA();
       void show()
    {
        cout<<"First name is "<<Fname<<endl;
        cout<<"Last Name is "<<Lname<<endl;
        cout<<"Roll number is "<<rollnum<<endl;
        cout<<"Degree name is "<<degree<<endl;
        cout<<"CGPA name is "<<CGPA<<endl;
    }
       };
    void Student::setRoll(int a)
    {rollnum =a;}
    void Student::setdegree(string b)
    {degree =b;}
    void Student::setCGPA(double a)
    {CGPA = a;}
    int Student::getRoll()
    {return rollnum;}
    string Student::getdegree()
    {return degree;}
    double Student::getCGPA()
    {return CGPA;}
class Teacher:public Person{
    private:
    string subjectName;
    double pay;
    public:
    Teacher(string a, double b)
    {
        subjectName=a;
        pay=b;
    }

    void setSubjectName(string a);
    void setpay(double b);
    string getSubjectName();
    double getpay();
    void show()
    {
        cout<<"First name is "<<Fname<<endl;
        cout<<"Last Name is "<<Lname<<endl;
        cout<<"Subject name is "<<subjectName<<endl;
        cout<<"Pay is "<<pay<<endl;

    }
    
};
void Teacher::setSubjectName(string a)
    {subjectName=a;}
void Teacher::setpay(double b)
    {pay=b;}
string Teacher::getSubjectName()
{return subjectName;}
double Teacher::getpay()
{return pay;}




int main()
{
    Person a;
    a.setFname("Oslo");
    a.setLname("DENVER");
    a.setAge(22);
    a.show();
    cout<<endl;
    Student student(437,"Bssc");
    student.setFname("Subhan");
    student.setLname("Allah");
    student.setRoll(112);
    student.setdegree("BSSE");
    student.setCGPA(4.6);
    student.show();
    cout<<endl;
    Teacher op("Physics",32332.50);
    op.setFname("Danial");
    op.setLname("Ahmed");
    op.setSubjectName("OOP");
    op.setpay(70000.50);
    op.show();
}



