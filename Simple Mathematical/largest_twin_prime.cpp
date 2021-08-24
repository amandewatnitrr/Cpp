#include<iostream>
#include<conio.h>

using namespace std;
void twinprime(int);

int main()
{
	int start,end;
	cout<<"\nProgram to find Largest twin-prime in given range ";
	cout<<"\nEnter end Number --> ";
	cin>>end;
	twinprime(end);
	return 0;
}

void twinprime(int end)
{
	int k1,k2,ar[2];
	for(int i=1;i<=end;i++)
		{
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
				 if(k2==0)
				   {
				    ar[0]=i;
				    ar[1]=i+2;
				   }
				}
				
		}
	cout<<"Largest twin prime = "<<ar[0]<<" "<<ar[1];	
}
