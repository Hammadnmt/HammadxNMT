#include<iostream>
using namespace std;
class bankaccount{
	private:
	string name;
	long double balance;
	public:
	int dep,wit;
	void setname(string n)
	{
	name=n;
	}
	string getname()
	{
	return name;;
	}
	void setbalance(long double b)
	{
	balance=b;
	}
	long double getbalance()
	{
	return balance;
	}
	void deposit()
	{
	cout<<"deposit amount ";
	cin>>dep;
	balance=balance+dep;
	cout<<" Balance in your account is: "<<balance<<endl;
	}
	void withdraw()
	{
	cout<<"Amount of withdraw from account: ";
	cin>>wit;
	balance=balance-wit;
	cout<<"your total balance is "<<balance<<endl;;
	}
	bankaccount(string n, long double b)
	{
	name=n;
	balance=b;
	}
};
class check:public bankaccount{
	private:
	int lastnum;
	public:
	check(string n,int b,int lst):bankaccount(n,b)
	{
	lastnum=lst;
	}
	void setlastnum(int lst)
	{
	lastnum=lst;
	}
	int getlastnum()
	{
	return lastnum;
	}
};
class saving:public bankaccount{
	private:
	float interest;
	public:
	void setinterest(float inter)
	{
	interest=inter;
	}
	float getinterest()
	{
	return interest;
	} 
	saving(float inter,string n, int b):bankaccount(n,b)
	{
	interest=inter;
	}
};
int main()
{
	int l;
	bankaccount b("Hammad",60000);
	check c("Hammad HBL",60000,13500);
	saving s(3.79,"Hammad HBL",60000);
	cout<<"Account name is "<<b.getname()<<endl;
	cout<<"Balance is "<<b.getname()<<" is: "<<b.getbalance()<<endl;
	cout<<"Last number of your account is: "<<c.getlastnum()<<endl;
	cout<<"Interset in: "<<s.getinterest()<<endl;
	b.deposit();
}
