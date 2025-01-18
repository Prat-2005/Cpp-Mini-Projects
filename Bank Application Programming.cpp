#include<iostream>
using namespace std;
int main()
{
  int acc_no,password,amt,choice,dep,witdra,bal=12000;
  cout<<"Enter your Account Number: "<<endl;
  cin>>acc_no;
  cout<<"Enter the password: "<<endl;
  cin>>password;
  if(acc_no==31032005 && password==1415)
  {
    cout<<"Connected to Service......"<<endl;
    cout<<"Choose your option:"<<endl;
    cout<<"1.Deposit."<<endl;
    cout<<"2.Withdraw."<<endl;
    cout<<"3.Check Balance."<<endl;
    cout<<".......choose any one\n";
    cout<<"Enter your choice: "<<endl;
    cin>>choice;
    switch(choice)
    {
      case 1:
    	cout<<"Enter the amount to deposit:\n";
    	cin>>dep;
    	cout<<"Your money is deposited successfully and your Current Bank Balance is Rs."<<bal+dep<<"."<<endl;
    	break;
      case 2:
    	cout<<"Enter the amount to Withdraw:\n";
    	cin>>witdra;
    	if(witdra<=bal)
    	{
    	  cout<<"Your money is withdrawl successfully and your Current Bank Balance is Rs."<<bal-witdra<<"."<<endl;
         }
         else
         {
           cout<<"Sorry,You cannot withdraw money more than your bank balance as per guidelines."<<endl;
	}
    	break;
      case 3:
    	cout<<"Your Bank Balance:\n"<<"Rs."<<bal<<".";
    	break;
      default:
         cout<<"Invalid Option."<<endl;	    	
     }
     cout<<endl;
     cout<<endl;
     cout<<endl;
     cout<<"THANK YOU FOR YOUR VISIT!!!";
  }
  else
  {
     cout<<"Invaild account number or password."<<endl<<"Please check your credentials and try again.";
  }
  return 0;
}
