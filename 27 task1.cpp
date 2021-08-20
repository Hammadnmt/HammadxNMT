//Haseeb ur rehman 064
#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	ifstream fin;
	ofstream fout;
	string data;
	fin.open("emmployee.txt");
	fout.open("backup.txt");
	if(!fin)
	{
		cout<<"File not found";
	}
	else
	{
		while(!fin.eof())
		{
			fin>>data;
			fout<<data;
			fout<<" ";
			cout<<data;
			cout<<" ";
		}
	}
	fin.close();
	fout.close();
}
