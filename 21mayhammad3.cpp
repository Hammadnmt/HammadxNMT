#include<iostream>
#include<string>
using namespace std;

class Person{
    protected:
    string fname;
    string lname;
    int Age;
    double Height;
    public:
    Person(){
        fname=" ";
        lname=" ";
        Age=0;
        Height=0;
    }
    Person(string a,string b)
    {
        fname=a;
        lname=b;
    }
    void setfname(string);
    void setlname(string);
    void setAge(int);
    void setheight(double);
    string getfname();
    string getlname();
    int getage();
    double getheight();
    void show();
};
void Person::setfname(string a)
{
    fname=a;
}
void Person::setlname(string b)
{
    lname=b;
}
void Person::setAge(int c)
{
    Age=c;
}
void Person::setheight(double d)
{
    Height=d;
}
string Person::getfname(){return fname;}
string Person::getlname(){return lname;}
int Person::getage(){return Age;}
double Person::getheight(){return Height;}
void Person::show()
{
    cout<<"Person first name is "<<fname<<endl<<"Person last name is "<<lname<<endl;
    cout<<"Person age is "<<Age<<endl<<"Person height is "<<Height<<endl;
    cout<<endl;
}

class Student:virtual public Person{
    private:
    int rollnum;
    string degree;
    double Cgpa;
    public:
    Student(){
        rollnum=0;
        Cgpa=0.0;
    }
    Student (int a, string d)
    {
        rollnum=a;
        degree=d;
    }
    void setrollnum (int a)
    {rollnum=a;}
    void setdegree (string d)
    {degree=d;}
    void setcgpa (double c)
    {Cgpa=c;}
    string getdegree()
    {return degree;}
    int getrollnum()
    {return rollnum;}
    double getCgpa()
    {return Cgpa;}
    void show()
    {
        cout<<"Student name "<<fname<<endl<<"Student rollnum "<<rollnum<<endl;
        cout<<"Student Cgpa "<<Cgpa<<endl<<"Student degree "<<degree<<endl;
        cout<<endl;
    }
};

class Teacher:virtual public Person{
    protected:
    string Name;
    int age;
    string email;
    string subject;
    double pay;
    public:
    Teacher(){
        Name=" ";
        age=0;
    }
    Teacher(string n,int a)
    {
        Name=n;
        age=a;
    }
    void setName(string a) { Name=a; }
    void setAge(int a) { Age=a; }
    void setemail(string a) { email=a; }
    void setSubject(string a) { subject=a; }
    void setPay(double d) { pay=d; }
    string getName() { return Name; }
    int getage() { return age; }
    string getemail() { return email; }
    string getsubject() { return subject; }
    double getPay() { return pay; }
    void show() {
        cout<<"Teacher name "<<Name<<endl<<"Age "<<age<<endl;
        cout<<"Teacher email "<<email<<endl<<"Subject "<<subject<<endl;
        cout<<"Teacher pay "<<pay<<endl;
        cout<<endl;
    }

};

class PartTimeTeacher : virtual public Teacher{
    private:
    string timeInterval;
    public:
    PartTimeTeacher(){
        timeInterval =" ";
    }
    PartTimeTeacher(string t)
    {
        timeInterval =t;
    }
    void setTime(string t) {timeInterval =t;}
    string getTime() {return timeInterval;}
    void show() {
    cout<<"Part-Time Teacher "<<endl;
    cout<<"Teacher name "<<Name<<endl<<"Age "<<age<<endl;
    cout<<"Teacher email "<<email<<endl<<"Subject "<<subject<<endl;
    cout<<"Teacher pay "<<pay<<endl<<"Time is "<<timeInterval;
    cout<<endl;
    }
};

int main()
{
    Person p("Hammad","Alice");
    p.setfname("Boby");
    p.setlname("Nup");
    p.setAge(18);
    p.setheight(5.7);
    p.show();

    Student st(437,"BSCS");
    st.setfname("Hammad");
    st.setrollnum(437);
    st.setdegree("BSCS");
    st.setcgpa(3.6);
    st.show();

    Teacher tc("Daniyal",28);
    tc.setName("Daniyal");
    tc.setemail("daniyal@gmail.com");
    tc.setSubject("OOP");
    tc.setPay(55596.60);
    tc.show();

    PartTimeTeacher pt("2pm to 6pm");
    pt.setName("Daniyal");
    pt.setAge(24);
    pt.setemail("daniyal@gmail.com");
    pt.setSubject("OOP");
    pt.setTime("3pm to 7pm");
    pt.setPay(676.60);
    pt.show();

}