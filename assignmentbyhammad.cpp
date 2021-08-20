#include<iostream>
#include<string>
using namespace std;

class CommissionEmployee{
    protected:
    string firstName;
    string lastName;
   string  socialSecurityNumber;
    int grossSales; // gross weekly sales
     double commissionRate; // commission
    public:
    void setFirstName(string a)
    {
        firstName = a;
    }
    string getFirstName()
    {
        return firstName;
    }
    void setLastName(string a)
    {
        lastName = a;
    }
    string getLastName()
    {
        return lastName;
    }
    void setSocialSecurityNumber(string a)
    {
        socialSecurityNumber= a;

    }
    string getSocialSecurityNumber()
    {
        return socialSecurityNumber;
    }
    void setgrossAmount(int a)
    {
        grossSales= a;
    }
    int getgrossSales()
    {
        return grossSales;
    }
    void setcommissionRate(double a)
    {
        commissionRate=a;
    }
    double getcommissionRate()
    {
        return commissionRate;
    }
    

    double earnings() const
    {
       return (grossSales*commissionRate);
       
    }
    void print()const
    {
        double a=(grossSales*commissionRate);
        cout<<"CommissionEmployee earning is "<<a;
    }


};
class  BasePlusCommissionEmployee:public CommissionEmployee{
    private:
    double baseSalary;
    double annualbonus;
    double providedFunds;
    public:
    void setbaseSalary(double a)
    {
        baseSalary = a;
    }
    double getbaseSalary()
    {
        return baseSalary;
    }
    void setannualbonus(double a)
    {
        annualbonus = a;
    }
    double getannualbonus()
    {
        return annualbonus;
    }
    void setprovidedFunds(double a)
    {
        providedFunds = a;
    }
    double getprovidedFunds()
    {
        return providedFunds;
    }
    double earnings()
    {
        return (baseSalary + ( commissionRate * grossSales )-providedFunds);
        
    }
    void print() const
    {
        double b=(baseSalary + ( commissionRate * grossSales )-providedFunds);
        cout<<"\nBasePlusCommissionEmployee Earing is "<<b<<endl;
    }

};
int main()
{
    cout<<"First name ";
    string a;
    cin>>a;
    cout<<"Last name ";
    string b;
    cin>>b;
    cout<<"Enter Gross Amount ";
    double c;
    cin>>c;
    cout<<"Enter SSnumber ";
    string d;
    cin>>d;
    cout<<"Commission Rate ";
    double e;
    cin>>e;
    CommissionEmployee p;
    p.setFirstName(a);
    p.setLastName(b);
    p.setgrossAmount(c);
    p.setSocialSecurityNumber(d);
    p.setcommissionRate(e);
    p.earnings();
    p.print();
    BasePlusCommissionEmployee o;
    double f,g,h;
    cout<<"\nEnter Basesalary ";
    cin>>f;
    cout<<"\nEnter AnnualBonus ";
    cin>>g;
    cout<<"\nEnter providedFunds ";
    cin>>h;
    o.setbaseSalary(f);
    o.setannualbonus(g);
    o.setprovidedFunds(h);
    o.earnings();
    o.print();
}
