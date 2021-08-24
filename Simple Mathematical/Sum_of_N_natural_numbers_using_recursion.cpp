#include <bits/stdc++.h> 
#include <math.h>

/*Sum of N natural number using recursion.*/

using namespace std; 
int sum(int);

int main()
{
	int n;
	cout<<"\nEnter the value of n upto which you want to see the sum = ";
	cin>>n;
	sum(n);
	return 0;
}

int sum(int n)
{
	if(n==0){return 0;}
	
	int psum = sum(n-1); /*This statement shows that it is a problem of direcct recursion.*/
	return n + psum;
}
