#include<iostream>
#include<string>
using namespace std;
class student
{
	private:
		string name;
	public:
		student(string n){
			name=n;
		}
		student(){
			name=" ";
		}
	    void setname(string n){
	    	cout<<"\nEnter you name = ";
	    	cin>>name;
		}
		string getname(){
			return name;
		}	
		virtual void show(string n){
        cout<<"\nStudent name is = "<<name;
		}
	};
class enginerring:public student{
	private:
		string field;
	public:
	    void setfield(string f){
	    	cout<<"\nEnter the subject you want to enroll in = ";
	    	cin>>field;
		}
		string getfield(){
			return field;
		}
		void show(string f){
			cout<<"\nStudent subject is = "<<field;
		}	
		enginerring(string f){
			field=f;
		}
		enginerring(){
			field=" ";
		}	    
};
class medicine:public student{
	private:
		string med;
	public:
	    void setmed(string m){
	    	cout<<"\nWhat are yout thoughts on corona? = ";
	    	cin>>med;
		}	
		string getmed(){
			return med;
		}
		void show(string m){
			cout<<"\nStudent thoughts about corona are = "<<med;
		}
		medicine(string m){
			med=m;
		}
        medicine(){
        	med=" ";
		}	
};
class science:public student{
	private:
		string subject;
	public:
	    void setsubject(string sub){
	    	cout<<"\nwhat was your last major subject = ";
	    	cin>>subject;
		}	
		string getsubject(){
			return subject;
		}
		void show(string sub){
			cout<<"\nLast Major subject of student is = "<<subject;
		}
		science(string sub){
			subject=sub;
		}
		science(){
			subject=" ";
		}
};
int main(){
	string n,f,m,s;
    student st(n);
    st.setname(n);
    enginerring eng(f);
    eng.setfield(f);
    medicine me(m);
    me.setmed(m);
    science sub(s);
    sub.setsubject(s);
    student* student1=&st;
    student1->show(n);
    student1=&eng;
    student1->show(n);
    student1=&me;
    student1->show(n); 
	student1=&sub;
	student1->show(n);
}
