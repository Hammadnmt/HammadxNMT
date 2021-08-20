#include <iostream>
#include<string>
using namespace std;
struct student
{
    char name[15];
    int roll;
    string address;
} s[15];
int main()
{
    cout << "Enter information of students: " << endl;
    for(int i = 0; i < 15; ++i)
    {
        s[i].roll = i+1;
        cout << "For roll number" << s[i].roll << "," << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter address: ";
        cin >> s[i].address;

        cout << endl;
    }
    cout << "Displaying Information: " << endl;
    for(int i = 0; i < 15; ++i)
    {
        cout << "\nRoll number: " << i+1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "address: " << s[i].address << endl;
    }

    return 0;
}
