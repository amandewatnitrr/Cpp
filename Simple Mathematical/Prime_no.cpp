#include<iostream>
#include<conio.h>
void prime(int, int);
using namespace std;

int start,end,k;

int main()
{
	char t;
	while(1)
	{
	 cout<<"\nEnter the range in which you want to find prime numbers -->";
	 cin>>start>>end;
	 prime(start,end);
	 cout<<"\nDo you want to continue --> ";
	 cin>>t;
	 if(t=='n'||'N'){return 0;}
	}
	return 0;
}
void prime(int start, int end)
{
	
	int k,count=0;
	cout<<"Prime numbers = ";
	for(int i=start;i<=end;i++)
		{
			k=0;
			for(int j=2;j<i/2;j++)
				{
					if(i%j==0){k=1;}
				}
			if(k==0)
				{
				 cout<<i<<" ";
				 count++;
				}  
		}
	cout<<"\nTotal Prime numbers b/w "<<start<<" and "<<end<<" = "<<count;	
}
