#include <bits/stdc++.h> 
#include <math.h>

/*Factorial of any given using recursion.*/

using namespace std; 
int fact(int);

int main()
{
	int n;
	cout<<"\nEnter the number whose factorial you want = ";
	cin>>n;
	cout<<"\nThe factorial of the given no. is = "<<fact(n)<<endl;
	return 0;
}

int fact(int n)
{
	int f;
	if(n == 1){return 1;}
	f = fact(n-1);
	return n*f;
}
