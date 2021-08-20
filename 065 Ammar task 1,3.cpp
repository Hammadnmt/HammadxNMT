#include<iostream>
#include<fstream>
using namespace std;


class student
{
   int roll;
   char name[30];
   int degree;
   int semster;
   int section;
   
public:
   student() { }
   void getData(); 
   void displayData(); 
};

void student :: getData() {
   cout << "\nEnter Roll No. :: ";
   cin >> roll;
   cout << "\nEnter Name : ";
   cin.getline(name, 30);
   cout << "\nEnter degree : ";
   cin >> degree;
   cout << "\nEnter semster : ";
   cin >> semster;
   cout << "\nEnter section : ";
   cin >> section;
}

void student :: displayData() {
   cout << "\nRoll No. : " << roll << endl;
   cout << "\nName : " << name << endl;
   cout << "\ndegree : " << degree << endl;
   cout << "\nsemster : "<<semster<<endl;
    cout << "\nsection : "<<section<<endl;
}

int main()
{
   student s[5]; 
   fstream student;
   int i;

   student.open("C:\\Users\\acer\\Documents\\student.txt", ios :: out);
    cout << "\nWriting Student information to the student :- " << endl;
    cout << "\nEnter 5 students Details to the student :- " << endl;

   for (i = 0; i < 5; i++)
    {
      s[i].getData();
      
      student.write((char *)&s[i], sizeof(s[i]));
    }

   student.close();

   student.open("student.txt", ios :: in);
   cout << "\nReading Student information to the student :- " << endl;

   for (i = 0; i < 5; i++)
    {
      
      student.read((char *)&s[i], sizeof(s[i]));
      s[i].displayData();
    }

   student.close(); 

   return 0;
}
