#include <math.h>
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

void sieve_eratosthenes(int n)
{
	bool a[n];
	for(int i=0;i<n;i++)
		{
			a[i]=true;
		}
		
		
	for(int i=2;pow(i,2)<=n;i++)
		{
			if(a[i]==true)
				{
					for(int j=pow(i,2);j<=n;j=j+i)
						{
							a[j]=false;
						
						}
				}
		}
	cout<<"\nThe prime no. upto "<<n<<" are = "<<endl;
	for(int i=2;i<=n;i++)
		{
			if(a[i]==true){cout<<i<<" ";}
		}
		
		
}

int main()
{
	int n;
	cout<<"\nEnter the no. upto which you want to print the prime no. = ";
	cin>>n;
	sieve_eratosthenes(n);
	return 0;
}
