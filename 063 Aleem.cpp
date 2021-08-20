#include<iostream>
using namespace std;

class ZooAnimal
{
   private:
       char name;
       int cageNumber;
       double weightDate;
       int weight;
   public:
   	    void setName(char);
   	    void setcagenum(int);
   	    void setweightdate(double);
   	    void setweight(int);
   	    void show();
        ZooAnimal()
        {
        	name= "  ";
        	cagenum=" ";
        	weightdate=" ";
        	weight=" ";
        	
		}
};
       void ZooAnimal::setName(char a)
       {
       	name= a;
	   }
       void ZooAnimal::setCageNum(int b)
       {
       	cagenum= b;
	   }
       void ZooAnimal::setWeightdate(double c)
       {
       	weightdate= c;
	   }
       void ZooAnimal::setWeight(int d)
       {
       	weight= d;
	   }
       void ZooAnimal::show()
	   {
	   	cout<<"The name is:"<<name<<endl;
	   	cout<<"The cagenum is:"<<cagenum<<endl;
	   	cout<<"The weightdate is:"<<weightdate<<endl;
	   	cout<<"The weight is:"<<weight<<endl;
	   }
int main()
{
	ZooAnimal z;
	    cout<<"Enter name:"<<name<<endl;
	   	cin>>Name;
	   	z.setName(name);
	   	cout<<"Enter cagenum:"<<cagenum<<endl;
	   	cin>>cagenum;
	   	z.setCageNum(cagenum);
	   	cout<<"Enter weightdate:"<<weightdate<<endl;
	   	cin>>weightdate;
	   	z.setWeightdate(weightdate);
	   	cout<<"Enter weight:"<<weight<<endl;
	   	cin>>weight;
	   	z.setWeight(weight);
}	   
		
		 
    
    	
	      


