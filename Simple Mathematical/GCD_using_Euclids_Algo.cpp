#include <bits/stdc++.h> 
#include <math.h>

/*Euler's Algorithm to find GCD*/

using namespace std; 
int gcd(int,int);

int main()
{
	int a,b;
	cout<<"\nEnter 2 numbers A and B (A must be greater than B) = ";
	cin>>a>>b;
	cout<<"\nThe GCD of given no. is = "<<gcd(a,b)<<endl;
	return 0;
}

int gcd (int a,int b)
{
	int rem;
	while(b!=0)
		{
			rem = a%b;
			a = b;
			b=rem;
		}
	return a;
}
