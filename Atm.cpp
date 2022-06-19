// atm for 5 persons and manager of an private company 

#include<iostream>
using namespace std;
#include<string.h>
#include<conio.h>
#include<fstream>

int choice;
double balance=500;

void showMenu(){ 
	cout<<endl<<"**************MENU**************"<<endl;
	cout<<"1. Check Balance "<<endl;
	cout<<"2. Deposit"<<endl;
	cout<<"3. Withdraw"<<endl;
	cout<<"4. Exit :"<<endl; 
	cout<<"********************************"<<endl;
} 

void transaction()
{
	
		system("cls");
	do{	
		showMenu();
		cout<<" Choice: ";
		cin>>choice;
		system("cls");
		switch(choice){
			case 1: cout<<"Balance amount: "<<balance<<" $"<<endl; 
				break;
			case 2: cout<<"Deposit amount: "; 
				double depositamount;
				cin>>depositamount;
				balance+=depositamount;
				break;
			case 3: cout<<"Withdraw amount: ";
				double withdrawamount;
				cin>>withdrawamount;
				if(withdrawamount<=balance)
					balance-=withdrawamount;
				else
					cout<<"Account has insufficient balance!"<<endl;
				break;
			}
	}while(choice!=4);
}

string Pass()
{
	int ch;
	string pass;
	
	ch=getch();
	
	while(ch!=13)
	{
		pass.push_back(ch);
		cout<<'*';
		ch=getch();
	}
	return pass;
}

int main()
{
	int input;
	//check the balance, deposit, withdraw, show menu
	start:
	system("cls");
	cout<<"\n\t\t\t Welcome to our atm \n";
	cout<<"  1. AAAAA "<<endl;
	cout<<"  2. BBBBB "<<endl;
	cout<<"  3. CCCCC "<<endl;
	cout<<"  4. DDDDD "<<endl;
	cout<<"  5. Manager : "<<endl;
	cin>>input;
	switch(input)
	{
		case 1: system("cls");
			cout<<"\n Welcome AAAAA \n Enter pin : ";
			if(Pass()=="1111")
			{	transaction();  break;
			}
			else
			{ 	goto start;			
			}
			
		case 2: system("cls");
			cout<<"\n Welcome BBBBB \n Enter pin : ";
			if(Pass()=="2222")
			{	transaction();  break;	
			}
			else
			{ 	goto start;			
			}
		case 3: system("cls");
			cout<<"\n Welcome CCCC \n Enter pin : ";
			if(Pass()=="3333")
			{	transaction();  break;
			}
			else
			{ 	goto start;			
			}
		case 4: system("cls");
			cout<<"\n Welcome DDDD \n Enter pin : ";
			if(Pass()=="4444")
			{	transaction();  break;	
			}
			else
			{ 	goto start;			
			}
		case 5: system("cls");
			cout<<"\n Welcome Manager \n Enter pin to access the atm and transaction of employees : ";
			if(Pass()=="manager")
			{	transaction();  break;	
			}
			else
			{ 	goto start;			
			}
		default:
			cout<<"\n No such user found";
	}
	cout<<"\n\t\t\t Thank you for using our atm, \n\t\t\t hope you had good experience.";
}
