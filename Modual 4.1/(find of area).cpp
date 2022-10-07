#include<iostream>
using namespace std;
class shape
{
	float ans,b,h;
	public:
		void area (float r)
		{
			ans =3.14*r*r;
			cout<<"Area of Circle ="<<ans;
		}
		void area()
		{
			cout<<"\nEnter Traingle Base :";
			cin>>b;
			cout<<"\nEnter Traingle Base :";
			cin>>h;
			ans =0.5*b*h;
			cout<<"\nArea Of Traingle ="<<ans;
		}
		void area(float a,float b)
		{
			ans =a*b;
			cout<<"\nArea of Rectangle/Square="<<ans;
		}
};
main()
{
	shape m;
	int n;
	float r,b,h;
	cout<<"\Select the shape to find area :";
	cout<<"\n1.Circle";
	cout<<"\n2.Traingle";
	cout<<"\n3.Rectangle of Square";
	cin>>n;
	
	switch(n)
	{
		case 1:
			cout<<"Enter radius :";
			cin>>r;
			m.area(r);
			break;
		
		case 2:
			m.area();
			break;
			
		case 3:
			cout<<"\Enter Base of Rectangle :";
			cin>>b;
			cout<<"\Enter Height of Rectangle :";
			cin>>h;
			m.area(b,h);
			break;
			
			default:
			cout<<"\nInvalid Input!!";	
	}
}