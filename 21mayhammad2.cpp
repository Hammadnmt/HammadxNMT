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
    void showdetails();
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
void Person::showdetails()
{
    cout<<"Person first name is "<<fname<<endl<<"Person last name is "<<lname<<endl;
    cout<<"Person age is "<<Age<<endl<<"Person height is "<<Height<<endl;}

class Baseballplayer : virtual public Person{
    private:
    string equipment;
    string vanue;
    string team;
    public:
    Baseballplayer()
    {
        equipment = " ";
        vanue = " ";
        team=" ";
    }
    Baseballplayer(string a,string b):Person("Hammad","Boby")
    {
        team=a;
        vanue=b;
    }
    void setequipment(string);
    void setvanue(string);
    void setteam(string);
    string getequipment();
    string getvanue();
    string getteam();
    void showdetails();
    };
    void Baseballplayer::setequipment(string a)
    {
        equipment = a;
    }
    void Baseballplayer::setvanue(string a)
    {
        vanue = a;
    }
    void Baseballplayer::setteam(string a)
    {
        team=a;
    }
    string Baseballplayer::getequipment()
    {
        return equipment;
    }
    string Baseballplayer::getvanue()
    {
        return vanue;
    }
    string Baseballplayer::getteam()
    {
        return team;
    }
    void Baseballplayer::showdetails()
    {
        cout<<"Player name is "<<fname<<endl<<"Player team is "<<team<<endl;
        cout<<"Player Equipment is "<<equipment<<endl<<"Place of vanue "<<vanue<<endl;
        cout<<endl;
    }

    class Employee : virtual public Person{
        protected:
        string Name;
        int age;
        string email;
        string designation;
        string DOJ;
        double pay;
        public:
        Employee(){
            Name=" ";
            age=0;
            designation =" ";
         }
         void setName(string);
         void set_age(int);
         void set_designation(string);
         void set_email(string);
         void setDOJ(string);
         string getName();
         string get_designation();
         string get_email();
         string getDOJ();
         int getage();
         void showdetails();
    };
    void Employee::setName(string a)
    {
        Name=a;
    }
    void Employee::set_age(int a)
    {
        age=a;
    }
    void Employee::set_designation(string a)
    {
        designation=a;
    }
    void Employee::set_email(string a)
    {
        email=a;
    }
    void Employee::setDOJ(string a)
    {
        DOJ=a;
    }
    string Employee::getName()  {return Name;}
    int Employee::getage()   { return age;}
    string Employee::get_email() {return email;}
    string Employee::get_designation() { return designation;}
    string Employee::getDOJ() {return DOJ;}
    void Employee::showdetails()
    {
        cout<<"Employee Name "<<Name<<endl<<"Age is "<<age<<endl;
        cout<<"Designation "<<designation<<endl<<"Email "<<email<<endl;
        cout<<"Date of Join "<<DOJ<<endl;
    }

    class Supervisor: virtual public Employee{
        private:
        int ID;
        string operation;
        public:
        Supervisor()
        {
            ID=0;
            operation=" ";
        }
        Supervisor(string a, int b)
        {
            ID=b;
            operation=b;
        }
        void setID(int a)
        {ID=a;}
        void setoperation(string a)
        {operation=a;}
        string getoperation()
        {return operation;}
        int getID()
        {return ID;}
        
        void showdetails()
        {
            cout<<"supervisor name "<<Name<<endl;
            cout<<"Supervisor ID "<<ID<<endl;
            cout<<"operation "<<operation<<endl;
        }
    };
    int main(){
        Person p;
        p.setfname("John");
        p.setlname("LOL");
        p.setAge(18);
        p.setheight(5.8);
        p.showdetails();
        Baseballplayer o;
        o.setfname("Hammad");
        o.setAge(19);
        o.setheight(5.9);
        o.setequipment("Bat");
        o.setvanue("Olympics Ground");
        o.setteam("Morocoow");
        o.showdetails();
        Employee e;
        e.setName("POLO");
        e.set_age(17);
        e.set_email("hammad@gmail.com");
        e.set_designation("Manager");
        e.setDOJ("21-08-2002");
        e.showdetails();

        Supervisor s;
        s.setName("Javed");
        s.setID(641099);
        s.setoperation("Operation of Managing the staff");
        s.showdetails();
    }