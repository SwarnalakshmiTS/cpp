#include<iostream>
using namespace std;
class student {
	private:
		char name[20],regd[10],branch[10];
		int sem;
	public:
	    void input();
	    void display();
			
};
void student::input()
{
	cout<<"enter name:";
	cin>>name;
	cout<<"enter regdno:";
	cin>>regd;
	cout<<"enter branch:";
	cin>>branch;
	cout<<"enter sem:";
	cin>>sem;
}
void student::display()
{
	cout<<"\nname:"<<name;
	cout<<"\nregdno:"<<regd;
	cout<<"\nbranch:"<<branch;
	cout<<"\nsem:"<<sem;
		
}
int main()
{
	student s;
	s.input();
	s.display();
}
