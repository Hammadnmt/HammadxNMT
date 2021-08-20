//Haseeb ur rehman 064
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
main()
{
	string text;
	string word;
	int count=0;
	int p=0;
	ifstream file;
	file.open("data.txt");
	if (!file)
	{
		cout<<"file does not exist"<<endl;
	}
	else
	{
		while (!file.eof())
		{
		file >> text;
		cout<<" ";
		cout<<text;
		file >> word;
	   	count++;
	   	if (word=="person")
	   	{
	   		p++;
		}
	   }
	   cout<<endl<<"total number of words in file : "<<count<<endl;
	   cout<<endl<<"Total person in count = : "<<p<<endl;
	}
	file.close();
	return 0;
}
