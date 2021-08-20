#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void communiateAnimal()=0;
};

class Dog : public Animal{
    public:
    void communiateAnimal()
    {
        cout<<"Woff Woff"<<endl;
    }
};

class Cat: public Animal{
    public:
    void communiateAnimal()
    {
        cout<<"Meow Meow "<<endl;
    }
};

class Lion: public Animal{
    public:
    void communiateAnimal()
    {
        cout<<"Rawwrrr Rawwrrr "<<endl;
    }
};

int main()
{
    Animal *ptr=new Dog();
    Animal *ptr1= new Cat();
    Animal *ptr2= new Lion();
    Animal *animal[3]={ptr,ptr1,ptr2};
    for(int i=0;i<3;i++)
    animal[i]->communiateAnimal();

}