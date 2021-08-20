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
        	name= 0;
        	cagenum=0;
        	weightdate=0;
        	weight=0;

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
	    z.setName(lion);
	    z.setCageNum(1122);
	    z.setWeightdate(23 march);
	    z.setWeight(50 kg);
	    z.show()
}
		 
    
    	
	      


