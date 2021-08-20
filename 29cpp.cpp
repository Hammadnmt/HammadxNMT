#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class person{
    protected:
    string name;
    int age;
    public:
    void setName(string Name);
    void setAge(int Age);
    string getName();
    int getAge();
};
void person::setName(string Name)
{
    name = Name;
}
void person::setAge(int Age)
{
    age = Age;
}
string person::getName()
{
    return name;
}
int person::getAge()
{
    return age;
}
class Student : public person{
    private:
    int marks;
    int rollnum;
    public:
    void filling();
    Student()
    {
        marks=0;
        rollnum=43;
    }
    void setmarks(int a);
    void setrollnum(int b);
    int getRollnum();
    int getmarks();
};
void Student::setmarks(int a)
{
    marks = a;
}
void Student:: setrollnum(int b)
{
    rollnum = b;
}
int Student::getRollnum()
{
    return rollnum;
}
int Student::getmarks()
{
    return marks;
}
void Student::filling()
{
    ofstream data,fout;
    data.open("Hammad.txt");
    if(!data)
    cout<<"no such file"<<endl;
    else
    {
        
        data<<name<<endl;
        data<<age<<endl;
        data<<rollnum<<endl;
        data<<"Marks are "<<marks<<endl;

        }
}
int main()
{
    
    Student p[2];
}