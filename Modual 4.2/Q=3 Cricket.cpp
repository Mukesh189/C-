#include<iostream>
using namespace std;
class Cricketer
{
	public:
		int id,i;
		int runs[5];
		char name[20];
		
		void get()
		{
			cout<<"\nEnter Cricketer Id :";
			cin>>id;
			cout<<"\nEnter the Name :";
			cin>>name;
			cout<<"\Enter Runs :";
			for(i=0;i<=4;i++)
			{
				cout<<"Match "<<i+1<<" = ";
				cin>>runs[i];
			}
		}
	
};

class Batsman :public Cricketer
{
	int total_runs,avg_runs,best_per;
	int i;
	public:
		void total()
		{
			total_runs =0;
			for(i=0;i<=4;i++)
			{
				total_runs =total_runs+runs[i];
			}
		}
		void avg()
		{
			avg_runs=total_runs/5;
		}
		void output()
		{
			total();
			avg();
			cout<<"\nCricketer Id :"<<id;
			cout<<"\nCricketer Name :"<<name;
			cout<<"\nTotal Runs :"<<total_runs;
			cout<<"\nAverege Runrate :"<<avg_runs;			
		}
};

main()
{
	Batsman b;
	b.get();
	b.total();
	b.avg();
	b.output();
}