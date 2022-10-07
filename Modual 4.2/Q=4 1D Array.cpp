#include<iostream>
using namespace std;
class Matrix
{
	int a[5],i;
	public :
		Matrix()
		{
			cout<<"Enter Matrix data :\n";
			for(i=0;i<5;i++)
			{
				cout<<"["<<i<<"] =";
				cin>>a[i];
			}
		}
		Matrix (Matrix obj1,Matrix obj2)
		{
			for(i=0;i<5;i++)
			{
				a[i]=obj1.a[i]+obj2.a[i];
			}
			for(i=0;i<5;i++)
			{
				cout<<"\n["<<i<<"]="<<a[i];
			}
		}
};
main()
{
	Matrix m1;
	Matrix m2;
	Matrix m3(m1,m2);
}