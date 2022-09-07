#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter your age = ";
	cin>>a;
	b=18-a;
	if(a>=18)
	{
		cout<<"you are eligible for voting";
	}
	else
	{
		cout<<"you are not eligible for voting"<<endl;
		cout<<"years left = "<<b;
	}
}
