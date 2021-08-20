#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Student
{
    private:
	string name;
	int roll;
	string degree;
	string sem;
	int sec;
	public:
	void setName(string a)
	{
		name=a;
	}
	void setRoll(int b)
	{
		roll=b;
	}
	void setDegree(string c)
	{
		degree=c;
	}
	void setSems(string d)
	{
		sem=d;
	}
	void setsec(int e)
	{
		sec=e;
	}
	void display()
	{
		cout<<"Name of student: "<<name<<endl<<"Roll number: "<<roll<<endl<<"Degree: "<<degree<<endl<<"Semester: "<<sem<<endl<<"Section is: "<<sec<<endl;
	}
};
int main()
{
	ofstream fout;
	fout.open("student.txt");
	Student p;
	string name,degree,sem;
	int roll,sec;
	cout<<"Enter Student name ";
	cin>>name;
	p.setName(name);
	cout<<"Enter Roll number ";
	cin>>roll;
	p.setRoll(roll);
	cout<<"Enter Degree ";
	cin>>degree;
	p.setDegree(degree);
	cout<<"Enter Semester ";
	cin>>sem;
	p.setSems(sem);
	cout<<"Enter Section ";
	cin>>sec;
	p.setsec(sec);
	cout<<"\nDisplaying Info\n";
    p.display();
    fout<<name<<endl<<roll<<endl<<degree<<endl<<sec<<endl;
    fout.close();
    
}

