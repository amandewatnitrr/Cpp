#include<iostream>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	cout<<"\nInitialising Calculator.....\n";
	int a,b,d;
	char c;
	char p='y';
	while(p=='y')
	{
		cout<<"\nA = ";
		cin>>a;
		cout<<"\nB = ";
		cin>>b;
		cout<<"\nOperation --> ";
		cin>>c;
		cout<<endl;
		if(c=='+')
		  {
			  d = a + b;
			  cout<<a<<"  "<<c<<" "<<b<<" = "<<d;
	      }
		else if(c=='-')
		       {
				   d = a - b;
 			  	   cout<<a<<"  "<<c<<" "<<b<<" = "<<d;
		       }
	    else if(c=='*')
	   		   {
	   			   d = a * b;
	   			   cout<<a<<"  "<<c<<" "<<b<<" = "<<d;
	   		   }
		else if(c=='/')
		   	   {
		   				   d = a / b;
		    		  	   cout<<a<<"  "<<c<<" "<<b<<" = "<<d;
		   	   }
		else {cout<<"\nIncorrect Operation Assigned...Retry!!\n";}
		cout<<"\nWould You like to Continue?? --> ";
		cin>>p;
	}
	return 0;
}
