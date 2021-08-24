#include <bits/stdc++.h> 
#include <math.h>

/*pth Power of any number N using recursion.*/

using namespace std; 
int power(int,int);

int main()
{
	int n,p;
	cout<<"\nEnter the number and power you want = ";
	cin>>n>>p;
	cout<<"\nThe Power of the given no. is = "<<power(n,p)<<endl;
	return 0;
}

int power(int n,int p)
{
	if(p==0)
		{
			return 1;
		}
	int ppow = power(n,p-1);
	return ppow*n;
}
