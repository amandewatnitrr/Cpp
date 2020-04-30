#include<iostream>
#include<conio.h>
#include<process.h>
void llht(int);
void nlht(int);
void urht(int);
void vt(int);
using namespace std;
int n,k;
char q;
int main()
{
	while(1)
	{
		cout<<"\nStructure no. --> \n1.Upper LHT \n2.Upper RHT \n3.Vertical Triangle ";
		cout<<"\n\nEnter the Structure code as desired --> ";
		cin>>k;
		cout<<"\n\nEnter the no of rows in the structure --> ";
		cin>>n;
		if(k==1){llht(n);}
		else if(k==2){urht(n);}
		else if(k==3){vt(n);}
		else{cout<<"\nYou Entered wrong Pattern code... ";}
		cout<<"\nWould you like to continue?? --> ";
		cin>>q;
		if(q=='n'||q=='N'){return 0;}
	}
}
	
	
void llht(int n)
{
	for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
				{
					cout<<"* ";
				}
			cout<<endl;	
		}
}



void urht(int n)
{
	for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
				{
					if(j<=n-i){cout<<" ";}
					else{cout<<"*";}
				}
			cout<<endl;	
		}
}

void vt(int n)
{
	int i,m;
	for(m=0,i=1;i<=n;i++)
		{
			m=0; 
			for(int j=1;j<=n-i;j++)
				{
					cout<<" ";
				}
			while(m!=(2*i)-1)
				{
					cout<<"*";
					m++;
				}
			cout<<endl;	
		}
}
