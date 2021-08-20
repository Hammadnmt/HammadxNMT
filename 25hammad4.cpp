#include<iostream>
using namespace std;

class complex
{
	private:
	float img;
	float real;
	public:
		complex()
		{
			img=0;
			real=0;
			
		}
		void setImag(float a)
		{
			img=a;
		}
		float getimg()
		{
			return img;
		}
		void setReal(float b)
		{
			real=b;
		}
		float getReal()
		{
			return real;
		}
		friend void add(class complex);
};
void add(class complex c1)
{
	float sum;
	sum=c1.img+c1.real;
	cout<<c1.img<<"i+"<<c1.real<<endl;
	}
int main()
{
	complex c;
	float imag,real;
	cout<<"\nEnter imaginary number = ";
	c.setImag(imag);
	c.getimg();
		cout<<"\nEnter real number = ";
	c.setReal(real);
	c.getReal();
	add(c);
	
}
