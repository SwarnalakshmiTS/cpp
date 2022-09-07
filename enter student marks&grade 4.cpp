#include<iostream>
using namespace std;
class student {
	private:
		int marks;
		char grade;
	public:
		student(int m,char g)
		{
			marks=m;
			grade=g; 
			}	
			
			void show()
			{
				cout<<"\nmarks="<<marks<<endl;
				cout<<"\ngrade="<<grade<<endl;
			}
			
};
int main()
{
	student s1(95,'S'),s2(82,'A'),s3(78,'B'),s4(50,'F');
	cout<<"record of student 1::-------------"<<endl;
	s1.show();
	cout<<"record of student 2::-------------"<<endl;
	s2.show();
	cout<<"record of student 3::-------------"<<endl;
	s3.show();
	cout<<"record of student 4::-------------"<<endl;
	s4.show();
	
	return 0;
}
