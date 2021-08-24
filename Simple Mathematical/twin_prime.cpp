#include<iostream>
#include<conio.h>

using namespace std;
void twinprime(int,int);

int main()
{
	int start,end;
	cout<<"\nProgram to find twin-prime in given range ";
	cout<<"\nEnter Start and end Number --> ";
	cin>>start>>end;
	twinprime(start,end);
	return 0;
}

void twinprime(int start,int end)
{
	int k1,k2,count=0;
	cout<<"\nTwin_prime =";
	for(int i=start;i<=end;i++)
		{
			count++;
			k1=0,k2=0;
			for(int j=2;j<=i/2;j++)
				{
					if(i%j==0){k1=1;}
				}		
			if(k1==0)
				{
				 for(int j=2;j<=(i+2)/2;j++)
						{
							if((i+2)%j==0){k2=1;}
						}	
				 if(k2==0){cout<<i<<"-"<<i+2<<" ";}
				 else{cout<<"'"<<i<<"'"<<" ";}
				}
				
		}
}
