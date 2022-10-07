#include<iostream>
using namespace std;
template <class t>
swap1(t&a,t&b)
{
	t temp;
	temp=a;
	a=b;
	b=temp;
}
main()
{
	int x=10,y=20;
	double a1=20.6,b1=10.3;
	char q='a',f='b';
	cout<<"before swap"<<x<<" "<<y<<endl;
	cout<<"before swap"<<a1<<" "<<b1<<endl;
	cout<<"before swap"<<q<<" "<<f<<endl;
	
	swap1(x,y);
	swap1(a1,b1);
	swap1(q,f);
	cout<<"After swap"<<x<<" "<<y<<endl;
	cout<<"After swap"<<a1<<" "<<b1<<endl;
	cout<<"After swap"<<q<<" "<<f;	
}