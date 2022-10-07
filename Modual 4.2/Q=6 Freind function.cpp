#include<iostream>
using namespace std;
class person
{
	private:
		int age=40;
		friend void input (person obj);
};

void input (person obj)
{
	cout<<"Enter Your Age :";
	cin>>obj.age;
	cout<<"Your age is :"<<obj.age;
}
main()
{
	person obj;
	input(obj);
}