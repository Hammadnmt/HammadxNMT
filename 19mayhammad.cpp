#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
    string name;
    int age;
    string cntct;
    double monthlySalary;
    public:
    Employee()
    {
        name=" ";
        age=0;
        cntct=" ";
    }
    Employee(string Name, int Age)
    {
        name=Name;
        age=Age;
    }
    void setname(string a)
    {
        name=a;
    }
    string getname()
    {
        return name;
    }
    void setage(int a)
    {
        age=a;
    }
    int getage()
    {
        return age;
    }
    void setcontact(string a)
    {
        cntct=a;

    }
    string getcontact()
    {
        return cntct;
    }
    void setMonthlySalary(double a){
        monthlySalary=a;
    }
    double getMonthlySalary()
    {
        return monthlySalary;
    }
    double getsalary()
    {
        return 12*monthlySalary;
    }
};
class Programmer:public Employee{
    private:
    string name;
    int age;
    string cntct;
    double monthlySalary;
    public:
    Programmer(string Name, int Age)
    {
         name=Name;
        age=Age;
    }
    void setName(string a)
    {
        name=a;
    }
    string getName()
    {
        return name;
    }
    void setAge(int a)
    {
        age=a;
    }
    int getAge()
    {
        return age;
    }
    void setContact(string a)
    {
        cntct=a;

    }
    string getContact()
    {
        return cntct;
    }
    void setmonthlySalary(double a){
        monthlySalary=a;
    }
    double getmonthlySalary()
    {
        return monthlySalary;
    }
    double getsalary()
    {
        return 12*monthlySalary;
    }

};
class SalesMan:public Employee
{
    private:
    string Sname;
    int Sage;
    string cntct;
    double monthlySalary;
    double bonus;
    public:
    SalesMan(string name, int age)
    {
        Sname = name;
        Sage = age;
    }
    void setSname(string sname)
    {
        Sname=sname;
    }
    string getSname()
    {
        return Sname;
    }
    void setSage(int sage)
    {
        Sage = sage;
    }
    int getSage()
    {
        return Sage;
    }
    void setContact(string a)
    {
        cntct=a;
    }
    string getcontact()
    {
        return cntct;
    }
    void setmonthlySalary(double d)
    {
        monthlySalary=d;
    }
    double getmonthlySalary()
    {
        return monthlySalary;
    }
    void setBonus(double bn)
    {
        bonus=bn;
    }
    double getbonus()
    {
        return bonus;
    }
    double getsalary() const
    {
        return (12*monthlySalary+bonus);
    }
};

int main()
{
    Employee emp("Hammad",18);
    Programmer op("Boby",12);
    SalesMan sm("Subhan",12);
    {
    cout<<"Enter Employee name "<<endl;
    string name;
    cin>>name;
    emp.setname(name);
    cout<<"Enter Employee age "<<endl;
    int age;
    cin>>age;
    emp.setage(age);
    cout<<"Enter Employee Contact Number "<<endl;
    string cont;
    cin>>cont;
    emp.setcontact(cont);
    cout<<"Enter Employee monthlySalary "<<endl;
    double sal;
    cin>>sal;
    emp.setMonthlySalary(sal);
    cout<<"Emplyee Salary is "<<emp.getsalary()<<endl;
    }
    
    {
    cout<<"Enter Programmer name "<<endl;
    string name1;
    cin>>name1;
    op.setName(name1);

    cout<<"Enter Programmer age "<<endl;
    int age1;
    cin>>age1;
    op.setAge(age1);
    cout<<"Enter Programmer Contact Number "<<endl;
    string cont1;
    cin>>cont1;
    op.setContact(cont1);
    cout<<"Enter Programmer monthlySalary "<<endl;
    double sal1;
    cin>>sal1;
    op.setMonthlySalary(sal1);
    cout<<"Programmer salary "<<op.getsalary()<<endl;
}

    {

    cout<<"Enter SalesMan name "<<endl;
    string a;
    cin>>a;
    sm.setSname(a);
    cout<<"Enter SalesMan age "<<endl;
    int age;
    sm.setSage(age);
    cout<<"Enter SalesMan Contact Number "<<endl;
    string b;
    sm.setContact(b);
    cout<<"Enter SalesMan monthlySalary "<<endl;
    double salary;
    cin>>salary;
    sm.setmonthlySalary(salary);
    cout<<"Enter SalesMan bonus "<<endl;
    float bonus;
    cin>>bonus;
    sm.setBonus(bonus);
    cout<<"SalesMan Salary  "<<sm.getsalary()<<endl;
    }




}