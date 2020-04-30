#include<iostream>

using namespace std;
int n;
int i,j=0,k=0,l;
void fibonacci(int n);
int main()
{
	cout<<"Enter the term you want fibonacci series to be printed --> ";
	cin>>n;
	fibonacci(n);
	return 0;
}

void fibonacci(int n)
{
	int k=2;
	cout<<"0 1 ";
	for(i=1;i<n;i++)
		{
			cout<<k<<" ";
			k = k+i;
			
		}
}
