#include <bits/stdc++.h> 
#include <math.h>

/*Fibonnacci Series.*/

using namespace std; 
int fibo(int);

int main()
{
	int n;
	cout<<"\nEnter the length of fibonnacci series you want = ";
	cin>>n;
	cout<<"\nThe fibonacci series of the given length is = ";
	fibo(n);
	cout<<endl;
	return 0;
}

int fibo(int n)
{
	int temp =0;
	int k=0,j=1;
	cout<<"0 "<<"1 ";
	for(int i=0;i<=n;i++)
		{
			temp = k + j;
			cout<<temp<<" ";
			k = j;
			j = temp;			
		}
	return 0;
}
