#include<iostream>
using namespace std;
class BANK
{
	char name[20],acc_type[20];
	double acc_no;
	int balance,deposite,withdraw;
	
	public:
	void assign()
	{	cout<<"\n\n";
		cout<<"\nEnter the Name:";
		cin>>name;
		cout<<"\nEnter the type of Account:";
		cin>>acc_type;
		cout<<"\nEnter Account Number ";
		cin>>acc_no;
		cout<<"\nEnter Balance :";
		cin>>balance;
	}
	void dep()
	{
		cout<<"\nEnter Amount to Deposit :";
		cin>>deposite;
		balance +=deposite;
		cout<<"\nDeposit Successfull/n/n Available Balance :"<<balance;
	}
	void with()
	{
		cout<<"\nEnter the Amount to withdraw :";
		cin>>withdraw;
		if(withdraw>balance)
		{
			cout<<"\nNOT SUFFICIENT BALANCE!!";
		}
		else
		{
			balance=balance-withdraw;
			cout<<"\nWithdraw Sucessful !!\nAvailable Amount:"<<balance;
		}
	}
	void get()
	{
		cout<<"\nAccount Holder Name :"<<name;
		cout<<"\Available Balance :"<<balance;
	}
};

main()
{
	int n,a;
	char c;
	
	BANK c1,c2,c3;
	c1.assign();
	c2.assign();
	c3.assign();
	
	cout<<"\t\t Welcome To Bank ATM";
	cout<<"\n\nEnter User Name:";
	cin>>n;
	
	switch(n)
	{
		case 1:
		user1:
		cout<<"\Select the operation to perform.";
		cout<<"\n1.Deposit \n2.Withdraw \n3.View Balance";
		cin>>a;
		
		switch(a)
		{
			case 1:
				c1.dep();
				break;
			case 2:
				c1.with();
				break;
			case 3:
				c1.get();
				break;
			
			default:
			cout<<"\nInvalid Input!!";	
		}
		
		cout<<"\nnDo you want to do perform Another Operation?(y/n)";
		fflush(stdin);
		cin>>c;
		if(c == 'y')
		{
			goto user1;
		}
		break;
		
		case 2:
			user2:				
			cout<<"\nSelect the opration to perform.";
			cout<<"\n1.Deposit \n2.Withdraw \n3.View Balance";
			cin>>a;
			switch(a)
			{
				case 1:
				c2.dep();
				break;
				
				case 2:
				c2.with();
				break;
				
				case 3:
				c2.get();
				break;
				
				default:
				cout<<"\Invalid Input!!";
			}
			
		cout<<"\nnDo you want to do perform Another Operation?(y/n)";
		fflush(stdin);
		cin>>c;
		if(c == 'y')
		{
			goto user2;
		}
		break;
		
		case 3:		
			user3:		
			cout<<"\nSelect the opration to perform.";
			cout<<"\n1.Deposit \n2.Withdraw \n3.View Balance";
			cin>>a;
			switch(a)
			{
				case 1:
				c3.dep();
				break;
				
				case 2:
				c3.with();
				break;
				
				case 3:
				c3.get();
				break;
				
				default:
				cout<<"\Invalid Input!!";
			}
			
		cout<<"\nnDo you want to do perform Another Operation?(y/n)";
		fflush(stdin);
		cin>>c;
		if(c == 'y')
		{
			goto user3;
		}
		break;
		default:
		cout<<"\Invalid Input!!";
	}
}