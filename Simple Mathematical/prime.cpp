#include<iostream>
#include<conio.h>

using namespace std;
void prime(int,int);

int main()
{
	int start,end;
	cout<<"\nProgram to find prime in given range ";
	cout<<"\nEnter start and end Number --> ";
	cin>>start>>end;
	prime(start,end);
	return 0;
}

void prime(int start,int end)
{
	int k1=0;
	for(int i=start;i<end+1;i++)
		{
			for(int j=2;j<i/2;j++)
				{
					if(i%j==0){k1=1;}
				}
			if(k1==0){cout<<i<<" ";}
		}
	cout<<endl;
}
