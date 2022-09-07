#include <iostream>
using namespace std;

class student
{
	private:
		char  name[30];
		int   rollNo;
		int   marks;
		int   avg;
	public:
		void getDetails(void);
		void putDetails(void);
};

void student::getDetails(void){
	cout << "Enter name: " ;
	cin >> name;
	cout << "Enter roll number: ";
	cin >> rollNo;
	cout << "Enter the english : ";
	cin >> marks;
	cout << "Enter the maths : ";
	cin >> marks;
	cout << "Enter the science : ";
	cin >> marks;
	cout << "Enter the social : ";
	cin >> marks;
	cout << "Enter the tamil : ";
	cin >>marks;
	
	avg=(int)marks/500;
}
void student::putDetails(void){
	cout << "Student details:\n";
	cout << "Name:"<< name << ",Roll Number:" << rollNo << ",marks:" << marks << ",average:" << avg;
}

int main()
{
	student std;		
	
	std.getDetails();
	std.putDetails();
	
	return 0;
}

